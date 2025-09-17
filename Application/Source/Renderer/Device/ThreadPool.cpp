#include "ThreadPool.h"

using namespace Renderer::Device;

ThreadPool::ThreadPool(size_t numThreads)
{
	for (size_t i = 0; i < numThreads; i++)
	{
		mWorkers.emplace_back(
			[this]
			{
				while (1)
				{
					std::function<void()> task;

					{
						// Lock the queue and wait for a task
						std::unique_lock<std::mutex> lock(this->mQueueMutex);

						mCondition.wait(lock,
							[this]
							{
								return this->mTerimated || !this->mTasks.empty();
							});

						if (this->mTerimated && this->mTasks.empty())
						{
							return;
						}

						task = std::move(this->mTasks.front());
						this->mTasks.pop();
					}

					// Execute the task
					task();
				}
			});
	}
}

ThreadPool::~ThreadPool()
{
	{
		std::unique_lock<std::mutex> lock(mQueueMutex);
		mTerimated = true;
	}

	mCondition.notify_all();
	
	for (std::thread& worker : mWorkers)
	{
		worker.join();
	}
}

template<typename F, typename... Args>
auto ThreadPool::Enqueue(F&& f, Args&&... args) -> std::future<typename std::result_of<F(Args...)>::type>
{
	using return_type = typename std::result_of<F(Args...)>::type;

	// Wrap callable and its arguments into a packaged_task - so we can get a future
	auto task = std::make_shared<std::packaged_task<return_type()>>(
		std::bind(std::forward<F>(f), std::forward<Args>(args)...));

	std::future<return_type> res = task->get_future();

	{
		std::unique_lock<std::mutex> lock(mQueueMutex);

		// Enqueueing not allowed after termination
		if (mTerimated)
		{
			throw std::runtime_error("enqueue on terminated ThreadPool");
		}

		// Push task into the queue
		mTasks.emplace(
			[task]()
			{
				(*task)();
			});
	}

	// Notify one worker thread that there is a new task
	mCondition.notify_one();

	return res;
}
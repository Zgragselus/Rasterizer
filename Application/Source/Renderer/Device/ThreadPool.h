#pragma once

#include <vector>
#include <queue>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <future>
#include <functional>

namespace Renderer
{
	namespace Device
	{
		class ThreadPool
		{
		private:
			/**
			 * @brief List of worker threads.
			 */
			std::vector<std::thread> mWorkers;

			/**
			 * @brief The queue of tasks to be executed. 'std::function' can hold any callable target.
			 */
			std::queue<std::function<void()>> mTasks;

			/**
			 * @brief Mutex for synchronizing access to the task queue.
			 */
			std::mutex mQueueMutex;

			/**
			 * @brief Condition variable to notify worker threads of new tasks.
			 */
			std::condition_variable mCondition;

			/**
			 * @brief Flag to indicate if the thread pool is being terminated.
			 */
			bool mTerimated;

		public:
			/**
			 * @brief Constructs a thread pool with the specified number of threads.
			 * @param numThreads The number of threads in the pool.
			 */
			ThreadPool(size_t numThreads);

			/**
			 * @brief Destructor. Joins all threads and cleans up resources.
			 */
			~ThreadPool();

			/**
			 * @brief Enqueues a task to be executed by the thread pool.
			 * @tparam F The type of the callable object.
			 * @tparam Args The types of the arguments to the callable object.
			 * @param f The callable object to be executed.
			 * @param args The arguments to be passed to the callable object.
			 * @return A future that will hold the result of the callable object.
			 */
			template<typename F, typename... Args>
			auto Enqueue(F&& f, Args&&... args) -> std::future<typename std::result_of<F(Args...)>::type>;
		};
	}
}
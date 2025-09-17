#pragma once

namespace Renderer
{
	namespace Device
	{
		/**
		 * @class Command
		 * @brief Abstract base class for commands that can be executed.
		 */
		class Command
		{
		public:
			/**
			 * @brief Virtual destructor.
			 */
			virtual ~Command() = default;

			/**
			 * @brief Executes the command.
			 */
			virtual void Execute() = 0;
		};
	}
}
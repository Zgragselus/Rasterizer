#pragma once

#include "Command/Command.h"
#include <vector>
#include <memory>

namespace Renderer
{
	namespace Device
	{
		class CommandList
		{
		private:
			/**
			 * @brief The list of commands to be executed.
			 */
			std::vector<std::unique_ptr<Command>> mCommands;

		public:
			/**
			 * @brief Default constructor.
			 */
			CommandList() = default;

			/**
			 * @brief Destructor.
			 */
			~CommandList() = default;

			/**
			 * @brief Adds a command to the command list.
			 * @param command The command to be added.
			 */
			void Push(std::unique_ptr<Command> command);
		};
	}
}
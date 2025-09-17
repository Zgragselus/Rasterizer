#include "CommandList.h"

using namespace Renderer::Device;

void CommandList::Push(std::unique_ptr<Command> command)
{
	mCommands.push_back(std::move(command));
}
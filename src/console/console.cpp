#include "vimax/console/console.hpp"

#include <iostream>


namespace vimax {


Console::Console(Runtime& runtime)
    :
    runtime_(runtime)
{
}


void Console::run()
{
    std::string command;

    while (true)
    {
        std::cout << "vimax> " << std::flush;

        if (!std::getline(std::cin, command))
        {
            break;
        }

        if (command.empty())
        {
            continue;
        }

        if (command == "exit")
        {
            break;
        }

        handle_command(command);
    }
}


void Console::handle_command(
    const std::string& command
)
{
    if (command == "status")
    {
        std::cout
            << "Runtime status: READY\n";

        return;
    }

    if (command == "modules")
    {
        const auto modules =
            runtime_.core().modules().list_modules();

        std::cout
            << "Loaded modules: "
            << modules.size()
            << "\n";

        for (std::size_t index = 0; index < modules.size(); ++index)
        {
            std::cout
                << "[" << index + 1 << "] "
                << modules[index]
                << "\n";
        }

        return;
    }

    if (command == "help")
    {
        std::cout
            << "Commands:\n"
            << "  status\n"
            << "  modules\n"
            << "  help\n"
            << "  exit\n";

        return;
    }

    std::cout
        << "Unknown command: "
        << command
        << "\n";
}


}
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
    std::cout << "\nvimax> " << std::flush;


    std::string command;


    while (true)
    {
        if (!std::getline(std::cin, command))
        {
            std::cout << "\n[CONSOLE] input closed\n";
            break;
        }


        std::cout << "[CMD] " << command << "\n";


        if (command == "exit")
        {
            break;
        }


        handle_command(command);


        std::cout << "\nvimax> " << std::flush;
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


    if (command == "help")
    {
        std::cout
            << "Commands:\n"
            << "  status\n"
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
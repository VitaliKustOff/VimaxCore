#include "vimax/core/runtime.hpp"
#include "vimax/console/console.hpp"

#include <iostream>


int main()
{
    std::cout << "[MAIN] started\n";

    vimax::Runtime runtime;

    runtime.start();

    std::cout << "\nvimax> " << std::flush;

    vimax::Console console(runtime);

    console.run();

    std::cout << "[MAIN] before console" << std::endl;

    return 0;
}
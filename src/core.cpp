#include "vimax/core/core.hpp"

#include "vimax/modules/echo_module.hpp"

#include <iostream>
#include <memory>


namespace vimax {


Core::Core()
    :
    auditLog("vimax_audit.jsonl")
{
}


Core::~Core()
{
}


void Core::initialize()
{
    std::cout
        << "=================================\n"
        << "        VIMAX CORE 0.1\n"
        << "=================================\n\n";


    std::cout << "[BOOT] Initializing core...\n\n";


    moduleRegistry.initialize();

    std::cout
        << "[ OK ] Module Registry\n";


    policyEngine.initialize();

    std::cout
        << "[ OK ] Policy Engine\n";


    std::cout
        << "[ OK ] Audit Log\n";


    auto echo =
        std::make_shared<EchoModule>();


    moduleRegistry.register_module(echo);


    std::cout
        << "\n[MODULES]\n"
        << "  + "
        << echo->name()
        << "\n";


    std::cout
        << "\n[RUNTIME]\n"
        << "  Status: READY\n\n";


    std::cout
        << "=================================\n";
}


}
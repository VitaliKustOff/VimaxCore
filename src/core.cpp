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


Core::~Core() = default;


void Core::initialize()
{
    std::cout
        << "[BOOT] Initializing core...\n\n";


    moduleRegistry.initialize();

    std::cout
        << "[ OK ] Module Registry\n";


    policyEngine.initialize();

    std::cout
        << "[ OK ] Policy Engine\n";


    std::cout
        << "[ OK ] Audit Log\n\n";


    moduleRegistry.register_module(
        std::make_shared<EchoModule>()
    );


    std::cout
        << "[MODULES]\n";


    for (const auto& name : moduleRegistry.list_modules())
    {
        std::cout
            << " + "
            << name
            << "\n";
    }


    std::cout
        << "\n[RUNTIME]\n"
        << " Status: READY\n\n";


    std::cout
        << "=================================\n";
}


ModuleRegistry& Core::modules()
{
    return moduleRegistry;
}


}
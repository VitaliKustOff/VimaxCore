#include "vimax/core/module_registry.hpp"


namespace vimax {


void ModuleRegistry::initialize()
{
}


void ModuleRegistry::register_module(
    std::shared_ptr<Module> module
)
{
    if (module)
    {
        modules_.push_back(module);
    }
}


std::vector<std::string> ModuleRegistry::list_modules() const
{
    std::vector<std::string> result;


    for (const auto& module : modules_)
    {
        if (module)
        {
            result.push_back(module->name());
        }
    }


    return result;
}


}
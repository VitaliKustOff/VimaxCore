#include "vimax/core/module_registry.hpp"


namespace vimax {


void ModuleRegistry::initialize()
{
}


void ModuleRegistry::register_module(
    std::shared_ptr<Module> module
)
{
    if (!module)
    {
        return;
    }


    modules_[module->name()] = module;
}


std::shared_ptr<Module> ModuleRegistry::find(
    const std::string& name
)
{
    auto it = modules_.find(name);


    if (it == modules_.end())
    {
        return nullptr;
    }


    return it->second;
}


std::vector<std::string> ModuleRegistry::list_modules() const
{
    std::vector<std::string> result;


    for (const auto& item : modules_)
    {
        result.push_back(item.first);
    }


    return result;
}


}
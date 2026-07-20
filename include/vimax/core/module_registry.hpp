#pragma once

#include "vimax/core/module.hpp"

#include <memory>
#include <string>
#include <unordered_map>
#include <vector>


namespace vimax {

class ModuleRegistry
{
public:

    void initialize();


    void register_module(
        std::shared_ptr<Module> module
    );


    std::shared_ptr<Module> find(
        const std::string& name
    );


    std::vector<std::string> list_modules() const;


private:

    std::unordered_map<
        std::string,
        std::shared_ptr<Module>
    > modules_;

};

}
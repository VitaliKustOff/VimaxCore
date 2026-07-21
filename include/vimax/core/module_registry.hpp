#pragma once

#include "vimax/core/module.hpp"

#include <memory>
#include <vector>
#include <string>


namespace vimax {


class ModuleRegistry
{
public:

    void initialize();


    void register_module(
        std::shared_ptr<Module> module
    );


    std::vector<std::string> list_modules() const;


private:

    std::vector<std::shared_ptr<Module>> modules_;

};


}
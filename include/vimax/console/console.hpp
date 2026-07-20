#pragma once

#include "vimax/core/runtime.hpp"

#include <string>


namespace vimax {


class Console
{
public:

    explicit Console(Runtime& runtime);


    void run();


private:

    Runtime& runtime_;


    void handle_command(
        const std::string& command
    );

};


}
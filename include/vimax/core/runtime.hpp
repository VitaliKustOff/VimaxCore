#pragma once

#include "vimax/core/core.hpp"


namespace vimax {


class Runtime
{
public:

    Runtime();


    void start();


    Core& core();


private:

    Core core_;

};


}
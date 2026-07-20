#pragma once

#include "vimax/core/core.hpp"

namespace vimax {

class Runtime
{
public:
    void start();

private:
    Core core;
};

}
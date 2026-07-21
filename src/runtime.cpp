#include "vimax/core/runtime.hpp"


namespace vimax {


Runtime::Runtime() = default;


void Runtime::start()
{
    core_.initialize();
}


Core& Runtime::core()
{
    return core_;
}


}
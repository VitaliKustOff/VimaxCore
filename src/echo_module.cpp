#include "vimax/core/echo_module.hpp"


namespace vimax {


std::string EchoModule::name() const
{
    return "echo";
}


ActionResult EchoModule::execute(
    const WorkflowStep& step
)
{
    return {
        true,
        "Echo: " + step.action
    };
}


}
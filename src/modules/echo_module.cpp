#include "vimax/modules/echo_module.hpp"


namespace vimax {


std::string EchoModule::name() const
{
    return "echo";
}


ActionResult EchoModule::execute(
    const WorkflowStep& step
)
{
    (void)step;

    ActionResult result;

    result.success = true;
    result.message = "Echo module executed";


    return result;
}


}
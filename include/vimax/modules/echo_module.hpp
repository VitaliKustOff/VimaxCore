#pragma once

#include "vimax/core/module.hpp"


namespace vimax {


class EchoModule : public Module
{
public:

    std::string name() const override;


    ActionResult execute(
        const WorkflowStep& step
    ) override;

};


}
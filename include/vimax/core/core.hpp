#pragma once

#include "vimax/core/module_registry.hpp"
#include "vimax/core/policy_engine.hpp"
#include "vimax/core/audit_log.hpp"
#include "vimax/modules/echo_module.hpp"


namespace vimax {


class Core
{
public:

    Core();
    ~Core();


    void initialize();


private:

    ModuleRegistry moduleRegistry;

    PolicyEngine policyEngine;

    JsonLinesAuditLog auditLog;

};


}
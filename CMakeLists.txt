cmake_minimum_required(VERSION 3.20)

project(vimax_core)


set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


include_directories(
    include
)


add_library(vimax_core

    src/core.cpp
    src/runtime.cpp

    src/module_registry.cpp
    src/policy_engine.cpp
    src/audit_log.cpp

    src/workflow.cpp
    src/workflow_engine.cpp

    src/modules/echo_module.cpp

    src/console/console.cpp
)


add_executable(vimax_demo

    apps/console/main.cpp

)


target_link_libraries(vimax_demo

    PRIVATE vimax_core

)


add_executable(vimax_tests

    tests/test_main.cpp

)


target_link_libraries(vimax_tests

    PRIVATE vimax_core

)

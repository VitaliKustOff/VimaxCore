cmake_minimum_required(VERSION 3.20)
project(vimax_core VERSION 0.1.0 LANGUAGES CXX)
option(VIMAX_BUILD_TESTS "Build tests" ON)
add_library(vimax_core 
    src/core.cpp
    src/module_registry.cpp
    src/policy_engine.cpp
    src/audit_log.cpp
    src/runtime.cpp
)
target_include_directories(vimax_core PUBLIC include)
target_compile_features(vimax_core PUBLIC cxx_std_20)
if(MSVC)
  target_compile_options(vimax_core PRIVATE /W4 /permissive-)
else()
  target_compile_options(vimax_core PRIVATE -Wall -Wextra -Wpedantic)
endif()
add_executable(vimax_demo apps/console/main.cpp)
target_link_libraries(vimax_demo PRIVATE vimax_core)
if(VIMAX_BUILD_TESTS)
  enable_testing()
  add_executable(vimax_tests tests/test_main.cpp)
  target_link_libraries(vimax_tests PRIVATE vimax_core)
  add_test(NAME vimax_tests COMMAND vimax_tests)
endif()

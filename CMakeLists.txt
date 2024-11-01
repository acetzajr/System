cmake_minimum_required(VERSION 3.28)

project(system)

file(GLOB_RECURSE system_SRC "src/*.cpp")
file(GLOB_RECURSE system_INC "src/*.hpp")

add_executable(system ${system_SRC} ${system_INC})

# target_compile_options(system -Wall -Wextra -Wpedantic -Werror -Wfatal-errors)
target_include_directories(system PRIVATE "src")

set_property(TARGET system PROPERTY COMPILE_WARNING_AS_ERROR ON)
set_property(TARGET system PROPERTY CXX_STANDARD 23)
set_property(TARGET system PROPERTY CXX_STANDARD_REQUIRED ON)

find_package(fmt REQUIRED)
target_link_libraries(system fmt::fmt)

find_package(raylib REQUIRED)
target_link_libraries(system raylib)

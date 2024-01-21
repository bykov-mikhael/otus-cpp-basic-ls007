cmake_minimum_required(VERSION 3.5)

message("CMAKE_SOURCE_DIR = " ${CMAKE_SOURCE_DIR})

project(hw-006  VERSION 1.0
                DESCRIPTION "homework-006"
                LANGUAGES CXX)

set(SOURCES     src/main.cpp)


set(LIBRARY     library/IContainer.h
                library/CLContainer.cpp
                library/CLContainer.h)

add_executable(hw-006   ${SOURCES}
                        ${LIBRARY})

if (MSVC)
    target_compile_options(hw-006 PUBLIC /W4 /WX)
else()
    target_compile_options(hw-006 PUBLIC -Wall -Wextra -Werror -pedantic)
endif()

set_target_properties(hw-006 PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED ON)
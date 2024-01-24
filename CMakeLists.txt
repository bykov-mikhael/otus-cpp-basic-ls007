cmake_minimum_required(VERSION 3.5)

#message("CMAKE_SOURCE_DIR = " ${CMAKE_SOURCE_DIR})
#message("CMAKE_BINARY_DIR = " ${CMAKE_BINARY_DIR})
#message("PROJECT_SOURCE_DIR = " ${PROJECT_SOURCE_DIR})
#message("PROJECT_BINARY_DIR = " ${PROJECT_BINARY_DIR})

project(hw-006  VERSION 1.0
                DESCRIPTION "homework-006"
                LANGUAGES CXX)

set(SOURCES     src/main.cpp)

set(LIBRARY     src/library/IContainer.h
                src/library/CListContainer.cpp
                src/library/CListContainer.h
                src/library/Test.cpp
                src/library/Test.h)

add_executable(hw-006   ${SOURCES}
                        ${LIBRARY})

if (MSVC)
    target_compile_options(hw-006 PUBLIC /W4 /WX)
else()
    target_compile_options(hw-006 PUBLIC -Wall -Wextra -Werror -pedantic)
endif()

#set_target_properties(hw-006 PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED ON)

set_target_properties(hw-006 PROPERTIES     CXX_STANDARD 17
                                            CXX_STANDARD_REQUIRED ON
                                            RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
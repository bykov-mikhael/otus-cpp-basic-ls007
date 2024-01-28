cmake_minimum_required(VERSION 3.8)

project(hw-006  VERSION 1.0
                DESCRIPTION "homework-006"
                LANGUAGES CXX)


add_executable(SOURCES  src/main.cpp)

target_compile_features(SOURCES PUBLIC cxx_std_17)
                
set_target_properties(SOURCES PROPERTIES
                              CXX_STANDARD_REQUIRED ON
                              RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin
)

target_include_directories(SOURCES PUBLIC library)
                
if (MSVC)
  target_compile_options(SOURCES PUBLIC /W4 /WX)
else ()
  target_compile_options(SOURCES PUBLIC -Wall -Wextra -Werror -pedantic)
endif()
message("Настройка минимальной версии cmake")
cmake_minimum_required(VERSION 3.20)

message("Настройка параметров проекта")
project(hw-007  VERSION 1.0 DESCRIPTION "homework-007" LANGUAGES CXX)

add_subdirectory(gtests)

set(src src/main.cpp)

set(tests gtests/test.cpp)

add_executable(hw-007  ${src})

target_compile_features(hw-007 PUBLIC cxx_std_17)
                
set_target_properties(hw-007  PROPERTIES
                              CXX_STANDARD_REQUIRED ON
                              RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin
)
              
# Warnings:
# Many (-Wall)
# Extra (-Wextra)
# Pedantic (-Wpedantic)

# Optimization level:
# None (-O0)
# Moderate (-O1)
# Full (-O2)
# Maximum (-O3)
# Maximum & smallest (-Oz)

# Build type:
# None (CMAKE_C_FLAGS or CMAKE_CXX_FLAGS used)
# Debug (CMAKE_C_FLAGS_DEBUG or CMAKE_CXX_FLAGS_DEBUG)
# Release (CMAKE_C_FLAGS_RELEASE or CMAKE_CXX_FLAGS_RELEASE)
# RelWithDebInfo (CMAKE_C_FLAGS_RELWITHDEBINFO or CMAKE_CXX_FLAGS_RELWITHDEBINFO, means "Release with debug info")
# MinSizeRel (CMAKE_C_FLAGS_MINSIZEREL or CMAKE_CXX_FLAGS_MINSIZEREL, stands for "Minimum size Release")

set(CMAKE_CXX_FLAGS "-Wall -Wextra -Werror -pedantic")
set(CMAKE_CXX_FLAGS_DEBUG "-g")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

enable_testing()

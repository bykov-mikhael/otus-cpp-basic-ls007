cmake_minimum_required(VERSION 3.8)

project(hw-006  VERSION 1.0
                DESCRIPTION "homework-006"
                LANGUAGES CXX)


add_executable(hw-006  src/main.cpp)

target_compile_features(hw-006 PUBLIC cxx_std_17)
                
set_target_properties(hw-006  PROPERTIES
                              CXX_STANDARD_REQUIRED ON
                              RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin
)

target_include_directories(hw-006 PUBLIC library)
                
 if (MSVC)
   target_compile_options(hw-006 PUBLIC /W4 /WX)
 else ()
   target_compile_options(hw-006 PUBLIC 
#                                        -Wall
#                                        -Wextra
#                                        -Werror
#                                        -pedantic
#                                        -g
#                                        -fsanitize=thread
#                                        -fsanitize=address
#                                        -fsanitize=undefined
                                        )

   target_link_options(hw-006 PUBLIC    
#                                        -fsanitize=thread
#                                        -fsanitize=address
#                                        -fsanitize=undefined
                                        )
  endif()
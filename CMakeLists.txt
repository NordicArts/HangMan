# CMake Version
cmake_minimum_required(VERSION 2.8)

# Project Name
project(HangMan)

# Output Dir
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/Build)

# Set Source
set(Hang ${PROJECT_SOURCE_DIR}/Hang)
set(GameHeaders ${Hang}/Main.hpp)
set(GameSources ${Hang}/Main.cpp)

# SDL
#find_package(SDL REQUIRED)
#include_directories(${SDL_INCLUDE_DIR})

# Compile
add_executable(HangMan ${GameSources} ${GameHeaders})
set_target_properties(HangMan PROPERTIES LINKER_LANGUAGE CXX)
set_target_properties(HangMan PROPERTIES OUTPUT_NAME "Hangman.app")

# Link
#target_link_libraries(HangMan ${SDL_LIBRARIES})
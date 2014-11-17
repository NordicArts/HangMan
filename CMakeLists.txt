# CMake Version
cmake_minimum_required(VERSION 2.8)

# Project Name
project(HangMan)

# C++11
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --std=c++11 -m64")

# Output Dir
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/Build)

# Boost Include Path
if (APPLE)
    include_directories(/usr/local/include)
    link_directories(/usr/local/include)
endif()

# Standard Include
include_directories(${PROJECT_SOURCE_DIR}/Hang)

# Set Source
set(Hang ${PROJECT_SOURCE_DIR}/Hang)
set(GameHeaders ${Hang}/Main.hpp)
set(GameSources ${Hang}/Main.cpp)

# Includes
list(APPEND GameHeaders ${Hang}/Includes.hpp)

# DeadMan
include_directories(${Hang}/DeadMan)
list(APPEND GameHeaders ${Hang}/DeadMan/DeadMan.hpp)
list(APPEND GameSources ${Hang}/DeadMan/DeadMan.cpp)

# Player
include_directories(${Hang}/Player)
list(APPEND GameHeaders ${Hang}/Player/Player.hpp)
list(APPEND GameSources ${Hang}/Player/Player.cpp)

# Word
include_directories(${Hang}/Words)
list(APPEND GameHeaders ${Hang}/Words/Words.hpp)
list(APPEND GameSources ${Hang}/Words/Words.cpp)

# SDL
#find_package(SDL REQUIRED)
#include_directories(${SDL_INCLUDE_DIR})

# Boost
find_package(Boost COMPONENTS locale REQUIRED)
include_directories(${Boost_INCLUDES})

# NordicOS
add_subdirectory(${Hang}/NordicOS)
include_directories(${Hang}/NordicOS)
link_directories(${Hang}/NordicOS)

# Compile
add_executable(HangMan ${GameSources} ${GameHeaders})
set_target_properties(HangMan PROPERTIES LINKER_LANGUAGE CXX)
set_target_properties(HangMan PROPERTIES OUTPUT_NAME "Hangman.app")

# Link
#target_link_libraries(HangMan ${SDL_LIBRARIES})
target_link_libraries(HangMan NordicOS)
target_link_libraries(HangMan ${Boost_LIBRARIES})
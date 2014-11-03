#ifndef NordicArts_HangMan_Main_H
#define NordicArts_HangMan_Main_H

#include <Includes.hpp>

// Errors
#ifndef printStuff
    #define printStuff
    #define printIt(variable) { std::cout << #variable << " " << variable << std::endl; }
#endif

namespace NordicArts {
    int Main();
};

#endif
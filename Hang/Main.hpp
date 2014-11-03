#ifndef Main_H
#define Main_H

// Includes
#include <iostream>
#include <string>
#include <string.h>
#include <stdexcept>
#include <cstddef>
#include <stdarg.h>
#include <stdint.h>
#include <iomanip>
#include <math.h>
#include <ios>
#include <stdlib.h>

// OSX Includes
#ifdef __OBJC__
    #import <Cocoa/Cocoa.h>
    #import <Foundation/Foundation.h>
    #import <CoreFoundation/CoreFoundation.h>
#endif

// Errors
#ifndef printStuff
    #define printStuff
    #define printIt(variable) { std::cout << #variable << " " << variable << std::endl; }
#endif

namespace NordicArts {
    int Main();
};

#endif
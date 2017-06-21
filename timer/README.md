# About

The microtimer class is used to instantiate a high-resolution microsecond
timer. This is a relative timer--i.e. it cannot be used to tell you the time
of day, month, or year, only the number of microseconds which have passed
between two events.

A microsecond is one millionth of a second.

This class should work for Windows and POSIX-based compilers (Linux etc.)

# Usage Example
~~~~
#include <iostream>
#include "microtimer.h"

int main()
{
    microtimer            microtime;
    microtimer::size_type start, end;

    start = microtime();

           // Code to time here

    end   = microtime();

    std::cout << (end - start) << " micros." << std::endl;

    return 0;
}
~~~~

# Converting to Other Time Units

A static member function is provided to convert microseconds TO_DAYS, TO_HOURS,
TO_MINUTES, TO_SECONDS and TO_MILLIS

~~~~
microtimer::size_type secs = microtimer::convert(micros, microtimer::TO_SECONDS)
~~~~

The conversion returns the number of complete units in the microsecond value, and
discards remaining microseconds (i.e. integer division is employed).
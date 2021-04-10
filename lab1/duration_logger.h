//
// Created by Sergio on 10/04/2021.
//

#ifndef LAB1_DURATION_LOGGER_H
#define LAB1_DURATION_LOGGER_H

#include <string>
#include <iostream>
#include <chrono>
using namespace std;
using namespace chrono;

class DurationLogger {
    string _name;
    time_point<system_clock, seconds> _start;

public:
    DurationLogger(const string& name);
    ~DurationLogger();
};


#endif //LAB1_DURATION_LOGGER_H

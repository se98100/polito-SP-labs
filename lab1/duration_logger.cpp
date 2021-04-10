//
// Created by Sergio on 10/04/2021.
//

#include "duration_logger.h"

DurationLogger::DurationLogger(const string &name) : _name(name) {
    cout << ">>>>>>>>>>>>>> starting " << _name << endl;
    _start = time_point_cast<seconds>(system_clock::now());
}

DurationLogger::~DurationLogger() {
    time_point<system_clock, seconds> end = time_point_cast<seconds>(system_clock::now());
    auto duration = (end - _start).count();
    cout << "<<<<<<<<<<<<<< ending " << _name << ": " << duration << " sec" << endl;
}

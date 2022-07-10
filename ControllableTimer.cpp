//
// Created by bllgg on 7/2/22.
//
#include <iostream>
#include "ControllableTimer.h"
#include <thread>

ControllableTimer::ControllableTimer() {
    interval = 5000;
    clear = false;
}

ControllableTimer::~ControllableTimer() {

}

void ControllableTimer::stop() {
    this->clear = false;
}

void ControllableTimer::set_interval(unsigned int intvl) {
    this->interval = intvl * 1000;
}

void ControllableTimer::start(void (*function)()) {
    this->clear = false;
    std::thread t([=]() {
        while (true) {
            if (this->clear) return;
            std::this_thread::sleep_for(std::chrono::milliseconds(this->interval));
            if (this->clear) return;
            function();
        }
    });
    t.detach();
}

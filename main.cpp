#include <iostream>
#include "ControllableTimer.h"
#include <unistd.h>

void sampleFunction() {
    std::cout << "Hey.. After each 2s..." << std::endl;
}

int main() {
    ControllableTimer controllableTimer = ControllableTimer();

    controllableTimer.set_interval(2);

    controllableTimer.start(&sampleFunction);

    sleep(30);

    controllableTimer.set_interval(4);

    sleep(30);

    controllableTimer.stop();

    return 0;
}

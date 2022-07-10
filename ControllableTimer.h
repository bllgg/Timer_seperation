//
// Created by bllgg on 7/2/22.
//

#ifndef TIMER_ASSIGNMENT_CONTROLLABLETHREAD_H
#define TIMER_ASSIGNMENT_CONTROLLABLETHREAD_H


class ControllableTimer {
private:
    unsigned int interval;
    bool clear;

public:
    ControllableTimer();

    ~ControllableTimer();

    void start(void (*function)());

    void stop();

    void set_interval(unsigned int interval);

};


#endif //TIMER_ASSIGNMENT_CONTROLLABLETHREAD_H

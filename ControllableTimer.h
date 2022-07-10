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

    template<typename Function>
    void start(Function function);

    void stop();

    void set_interval(unsigned int interval);

//    void set_timeout(int timeout);
};


#endif //TIMER_ASSIGNMENT_CONTROLLABLETHREAD_H

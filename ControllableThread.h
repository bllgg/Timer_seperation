//
// Created by bllgg on 7/2/22.
//

#ifndef TIMER_ASSIGNMENT_CONTROLLABLETHREAD_H
#define TIMER_ASSIGNMENT_CONTROLLABLETHREAD_H


class ControllableThread {
private:
    int interval;

public:
    ControllableThread();

    ~ControllableThread();

    bool start();

    bool stop();

    bool change_interval(int interval);
};


#endif //TIMER_ASSIGNMENT_CONTROLLABLETHREAD_H

#ifndef MULTITHREADTASK_H
#define MULTITHREADTASK_H

#include <iostream>
#include <thread>
#include "logger.h"
#include <ctime>


class MultiThreadTask
{
public:

    MultiThreadTask(const int task_number);

    void doSmth(const int duration=60);

    ~MultiThreadTask();

private:

    int m_task_number;
    long m_start_time;

};

#endif // MULTITHREADTASK_H

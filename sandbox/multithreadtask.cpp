#include "multithreadtask.h"

MultiThreadTask::MultiThreadTask(const int task_number)
                                : m_task_number(task_number)
                                , m_start_time()
{

}

void MultiThreadTask::doSmth(const int duration)
{

    double diff;
    do
    {
        long cur_time = clock();

        std::string message("Task " + std::to_string(m_task_number) +
                            " did something at " + std::to_string(cur_time));

        Logger::getInstance().toLog(message);

        diff = (clock() - m_start_time) / static_cast<double>(CLOCKS_PER_SEC);

    }
    while(diff < static_cast<double>(duration));



}

MultiThreadTask::~MultiThreadTask()
{

}

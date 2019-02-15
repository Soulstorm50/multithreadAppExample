#ifndef LOGGER_H
#define LOGGER_H

#include <fstream>
#include <iostream>


class Logger
{
public:
    static Logger& getInstance();

    Logger(Logger const &) = delete;
    void operator=(Logger const &) = delete;

    void toLog(const std::string message);

private:
    Logger();

    std::ofstream m_log;


};

#endif // LOGGER_H

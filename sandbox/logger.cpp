#include "logger.h"

Logger& Logger::getInstance()
{
    static Logger instance;

    return instance;
}

void Logger::toLog(const std::string message)
{
    m_log << message << "\n";
}

Logger::Logger()
{
    m_log.open ("log.txt");
    //myfile.close();
}



#include <limits>
#pragma once

class Logger
{
    /* severity levels for log */
    static const char LOG_INFO = 'I';
    static const char LOG_WARN = 'W';
    static const char LOG_ERROR = 'E';
    static const char LOG_FATAL = 'F';
    static const char LOG_DEBUG = 'D';
	Logger();
public:
	static void log(const std::string msg);
    static void info(const std::string msg);
    static void warn(const std::string msg);
    static void error(const std::string msg);
    static void fatal(const std::string msg);
    static void debug(const std::string msg);
    ~Logger();
private:
    static void write(const std::string msg, char sev);
};



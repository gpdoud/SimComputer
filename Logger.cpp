#include <iostream>
#include <sstream>
#include <string>
#include <Windows.h>
#include "Logger.h"

void Logger::write(const std::string msg, const char sev) {
    std::stringstream sstr;
    sstr << "[" << sev << "]"
        << " " << msg 
        << std::endl;
    std::cout << sstr.str();
    OutputDebugString(sstr.str().c_str());
}
void Logger::log(const std::string msg) {
    info(msg);
}
void Logger::info(const std::string msg) {
    write(msg, Logger::LOG_INFO);
}
void Logger::warn(const std::string msg) {
    write(msg, Logger::LOG_WARN);
}
void Logger::error(const std::string msg) {
    write(msg, Logger::LOG_ERROR);
}
void Logger::fatal(const std::string msg) {
    write(msg, Logger::LOG_FATAL);
}
void Logger::debug(const std::string msg) {
    write(msg, Logger::LOG_DEBUG);
}

Logger::Logger() {}
Logger::~Logger() {}
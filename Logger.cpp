#include <iostream>

#include "Logger.h"

using namespace std;

void Logger::log(const string msg) {
	cout << ">" << msg;
}

Logger::Logger() {}


Logger::~Logger() {}

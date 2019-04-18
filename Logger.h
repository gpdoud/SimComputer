#pragma once

class Logger
{
	Logger();
public:
	static void log(const std::string msg);
	~Logger();
};


#pragma once
#include "Config.h"
#include "Cpu.h"

class Computer {

    Config *cfg;
    Cpu cpu;
public:
	void boot(Config* cfg);
	void run();
	void shutdown();
	Computer();
	~Computer();
};
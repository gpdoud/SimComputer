#pragma once
#include "Config.h"
#include "Cpu.h"

class Computer {

    Config *cfg;
    Cpu* cpu;
    void setup(Config* cfg);
public:
	void boot();
	void run();
	void shutdown();
	Computer(Config *cfg);
	~Computer();
};
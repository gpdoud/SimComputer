#pragma once
#include "Config.h"
#include "Cpu.h"
#include "Jobs.h"
#include "Dispatcher.h"

class Computer {

    Config *cfg = nullptr;
    Cpu cpu;
    Dispatcher dp;
public:
	void boot_up(Config* cfg);
    void load_jobs(Jobs *jobs);
	void run();
	void shut_down();
	Computer();
	~Computer();
};
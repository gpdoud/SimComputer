#pragma once
#include "Config.h"
#include "Cpu.h"
#include "Jobs.h"
#include "Dispatcher.h"

class Computer {

    Config *cfg = nullptr;
    Cpu cpu;
    Jobs jobs_queue;
    Dispatcher dispatcher;
    void process_cycle();
public:
	void boot_up(Config* cfg);
    void load_jobs(Jobs *jobs);
	void run();
	void shut_down();
	Computer();
	~Computer();
};
#include "Core.h"

void Core::exec(Job* job) {
    Logger::log("Core.exec job " + job->get_desc());
    int cycles_remaining = -1;
    do {
        Process p = job->get_pq().Peek();
        cycles_remaining = p.get_req_cycles() - p.get_comp_cycles();
    } while(cycles_remaining == 0);
}

Core::Core() {}
Core::~Core() {}
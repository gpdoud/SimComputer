#include "Core.h"

void Core::exec(Job* job) {
    Logger::log("Core.exec(): " + job->get_desc());
    Process* p = job->get_pq().Peek();
    // process one cycle
    p->set_comp_cycles(p->get_comp_cycles() + 1);
    if(p->get_req_cycles() - p->get_comp_cycles() == 0) {
        Logger::log("set next current process");
    }
}

Core::Core() {}
Core::~Core() {}
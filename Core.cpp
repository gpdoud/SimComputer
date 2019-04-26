#include "Core.h"

void Core::exec(Job* job) {
    Logger::log("Core.exec(): " + job->get_desc());
    
    Process* p = job->get_pq().curr_process;
    // process one cycle
    p->set_comp_cycles(p->get_comp_cycles() + 1);
    if(p->get_comp_cycles() >= p->get_req_cycles()) {
        Logger::log("set next current process");
        auto pq = job->get_pq();
        auto ptr = pq.begin();
        ptr++;
        if(ptr == pq.end()) return;
        auto cp = job->get_pq().curr_process;
        cp = *ptr;
    }
}

Core::Core() {}
Core::~Core() {}
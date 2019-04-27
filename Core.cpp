#include "Core.h"

void Core::exec(Job* job) {
    auto pq = job->get_pq();
    if(pq.current() == nullptr) {
        return; // skip; it is complete
    }
    Logger::log("Core.exec(): " + job->get_desc());
    Process* curr = pq.current();
    // process one cycle
    curr->set_comp_cycles(curr->get_comp_cycles() + 1);
    if(curr->get_comp_cycles() >= curr->get_req_cycles()) {
        Logger::log("set next current process");
        curr->state_complete(); // set state to complete
        // set current to next process if not complete
        auto ptr = pq.begin();
        ptr++;
        if(ptr == pq.end()) { // all processes complete?
            pq.current(nullptr);
            return;
        }
        pq.current(*ptr);
    }
}

Core::Core() {}
Core::~Core() {}
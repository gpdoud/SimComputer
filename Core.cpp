#include "Core.h"

bool Core::exec(Job* job) {
    auto pq = job->get_pq();
    //if(pq.current() == nullptr) {
    //    return; // skip; it is complete
    //}
    Logger::log("Core.exec(): " + job->get_desc());
    // get the current process to execute
    Process* curr = pq->Peek(); // pq.current();
    // check if already complete, job is finished
    
    if(curr->isComplete()) {
        Logger::log("*** Job " + job->get_desc() + " completed.");
        Logger::debug(job->dump());
        return true; // job is done
    }
    // process one cycle
    curr->set_comp_cycles(curr->get_comp_cycles() + 1);
    // is the process complete?
    if(curr->get_comp_cycles() >= curr->get_req_cycles()) {
        // process is finished, set the next process to execute
        Logger::debug("set next current process");
        curr->state_complete(); // set state to complete
        // pop the current finished process
        Process* p = pq->Pop();
        // push it to the end of the queue
        pq->Push(p);
    }
    return false;
}

Core::Core() {}
Core::~Core() {}
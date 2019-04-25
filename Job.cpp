#include <sstream>
#include <guiddef.h>
#include "Job.h"

int Job::get_id() {
    return id;
}
std::string Job::get_desc() {
    return this->desc;
}

void Job::set_desc(std::string desc) {
    this->desc = desc;
}

Process_Queue Job::get_pq() const {
    return this->pq;
}

void Job::add_process(Process* p) {
    pq.Push(p);
}

std::string Job::dump() {
    std::stringstream strs;
    strs << "Job: [" << this->get_id() << "] "
        << this->get_desc() << std::endl;
    for(auto proc = pq.begin(); proc != pq.end(); proc++) {
        strs << "*proc: guid: " << std::to_string((*proc)->get_guid().Data1)
            << ", cycles completed " 
            << std::to_string((*proc)->get_comp_cycles())
            << " / "
            << std::to_string((*proc)->get_req_cycles())
            << std::endl;
    }
    return strs.str();
}

Job::Job() : Job("") {
    id = -1;
}

Job::Job(std::string desc) {
    pq = Process_Queue();
    static int lastId = 0;
    this->id = ++lastId;
    if(desc.compare("") != 0)
        this->set_desc(desc);
}

Job::~Job() {
}
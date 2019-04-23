#include <sstream>
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

void Job::add_process(Process p) {
    pq.Push(p);
}

std::string Job::dump() {
    std::stringstream strs;
    strs << "Job: [" << this->get_id() << "] "
        << this->get_desc() << std::endl;
    // TODO: iterate through the process_queue to display debug info
    return strs.str();
}

Job::Job() : Job("") {
    id = -1;
}

Job::Job(std::string desc) {
    static int lastId = 0;
    this->id = ++lastId;
    if(desc.compare("") != 0)
        this->set_desc(desc);
}

Job::~Job() {}
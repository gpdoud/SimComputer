#include "Job.h"
#include "Utility.h"

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

Job::Job() : Job("") {
    id = -1;
}

Job::Job(std::string desc) {
    DSI::IntGenerator* ig = DSI::IntGenerator::create_instance();
    this->id = ig->next();
    if(desc.compare("") != 0)
        this->set_desc(desc);
}

Job::~Job() {}
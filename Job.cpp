#include "Job.h"



std::string Job::get_desc() {
    return this->desc;
}

void Job::set_desc(std::string desc) {
    this->desc = desc;
}

Job::Job() {}
Job::Job(std::string desc) {
    this->set_desc(desc);
}
Job::~Job() {}
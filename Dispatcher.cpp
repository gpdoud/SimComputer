#include "Dispatcher.h"
#include "Jobs.h"

Job Dispatcher::read_job_queue(Jobs *jobs) {
    Job job = jobs->Pop();
    return job;
}

Dispatcher::Dispatcher() {
}
Dispatcher::~Dispatcher() {
}

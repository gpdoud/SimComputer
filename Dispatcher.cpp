#include "Dispatcher.h"
#include "Jobs.h"

Job Dispatcher::read_job_queue(Jobs jobs) {
    return jobs.Pop();
}

Dispatcher::Dispatcher() {
}
Dispatcher::~Dispatcher() {
}

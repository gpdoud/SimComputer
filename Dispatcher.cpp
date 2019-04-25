#include "Dispatcher.h"
#include "Jobs.h"

Job* Dispatcher::Pop(Jobs *jobs) {
    Job* job = jobs->Pop();
    return job;
}
void Dispatcher::Push(Jobs* jobs, Job *job) {
    jobs->Push(job);
}

Dispatcher::Dispatcher() {
}
Dispatcher::~Dispatcher() {
}

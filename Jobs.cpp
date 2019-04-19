#include "Jobs.h"

void Jobs::Push(Job *job) {
	job_queue.push(*job);
}
Job Jobs::Pop() {
	Job job = job_queue.front();
	job_queue.pop();
	return job;
}
bool Jobs::Count() {
    return job_queue.size();
}
Jobs::Jobs() {}
Jobs::~Jobs() {}

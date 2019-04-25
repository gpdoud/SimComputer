#include "Jobs.h"

void Jobs::Push(Job *job) {
	jobs_queue.push(job);
}
Job* Jobs::Pop() {
	Job* job = jobs_queue.front();
	jobs_queue.pop();
	return job;
}
size_t Jobs::Count() {
    return jobs_queue.size();
}
Jobs::Jobs() {
    jobs_queue = std::queue<Job*>();
}
Jobs::~Jobs() {}

#include "Jobs.h"

void Jobs::Push(Job job) {
	jobs.push(job);
}
Job Jobs::Pop() {
	Job job = jobs.front();
	jobs.pop();
	return job;
}

Jobs::Jobs() {}


Jobs::~Jobs() {}

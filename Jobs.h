#pragma once

#include <queue>

#include "Job.h"

class Jobs
{
	std::queue<Job> job_queue;

public:
	void Push(Job *job);
	Job Pop();
    size_t Count();
	Jobs();
	~Jobs();

};


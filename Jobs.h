#pragma once

#include <queue>

#include "Job.h"

class Jobs
{
	std::queue<Job> jobs;

public:
	void Push(Job job);
	Job Pop();
	Jobs();
	~Jobs();

};


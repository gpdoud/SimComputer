#pragma once

#include <queue>

#include "Job.h"

using namespace std;

class Jobs
{
	queue<Job> jobs;

public:
	void Push(Job job);
	Job Pop();
	Jobs();
	~Jobs();

};


#pragma once
#include "Job.h"
#include "Jobs.h"

class Dispatcher {

public:
    Job* Pop(Jobs *jobs);
    void Push(Jobs* jobs, Job *job);
    Dispatcher();
    ~Dispatcher();
};


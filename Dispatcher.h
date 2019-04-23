#pragma once
#include "Job.h"
#include "Jobs.h"

class Dispatcher {

public:
    Job read_job_queue(Jobs *jobs);
    Dispatcher();
    ~Dispatcher();
};


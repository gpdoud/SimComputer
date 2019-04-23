#pragma once
#include "Job.h"
#include "Logger.h"

class Core {

public:
    void exec(Job* job);
    int A = 8;
    Core();
    ~Core();
};


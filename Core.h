#pragma once
#include "Job.h"
#include "Logger.h"

class Core {

public:
    void exec(Job* job);
    Core();
    ~Core();
};


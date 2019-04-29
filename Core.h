#pragma once
#include "Job.h"
#include "Logger.h"

class Core {

public:
    bool exec(Job* job);
    Core();
    ~Core();
};


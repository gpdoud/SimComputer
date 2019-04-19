#pragma once
#include "Jobs.h"

class Dispatcher {
    Jobs* jobs = nullptr;

public:
    Dispatcher(Jobs *jobs);
    ~Dispatcher();
};


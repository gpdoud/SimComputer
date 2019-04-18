#pragma once
#include <vector>
#include "Core.h"

class Cpu {
    std::vector<Core> cores;
public:
    void create_cores(int nbr);
    Cpu();
    ~Cpu();
};


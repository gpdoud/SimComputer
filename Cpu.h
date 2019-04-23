#pragma once
#include <vector>
#include "Core.h"

class Cpu {
    std::vector<Core> cores;
public:
    size_t get_cores() const;
    Core peek(size_t idx);
    void create_cores(int nbr);
    Cpu();
    ~Cpu();
};


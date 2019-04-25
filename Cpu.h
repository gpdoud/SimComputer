#pragma once
#include <vector>
#include "Core.h"

class Cpu {
    std::vector<Core*> cpu_cores;
public:
    size_t cores() const;
    Core* peek(size_t idx);
    void create_cores(int nbr);
    Cpu();
    ~Cpu();
};


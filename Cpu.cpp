#include "Cpu.h"
#include "Core.h"

size_t Cpu::get_cores() const {
    return cores.size();
}

Core Cpu::peek(size_t idx) {
    return this->cores[idx];
}

void Cpu::create_cores(int nbr) {
    for(auto idx = 0; idx < nbr; idx++) {
        Core core;
        cores.push_back(core);
    }
}

Cpu::Cpu() {
}
Cpu::~Cpu() {
    cores.clear();
}
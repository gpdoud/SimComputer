#include "Cpu.h"
#include "Core.h"

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
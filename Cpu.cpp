#include "Cpu.h"
#include "Core.h"

size_t Cpu::cores() const {
    return cpu_cores.size();
}

Core* Cpu::peek(size_t idx) {
    return cpu_cores[idx];
}

void Cpu::create_cores(int nbr) {
    for(auto idx = 0; idx < nbr; idx++) {
        Core* core = new Core();
        cpu_cores.push_back(core);
    }
}

Cpu::Cpu() {
    cpu_cores = std::vector<Core*>();
}
Cpu::~Cpu() {
    cpu_cores.clear();
}
#include "Computer.h"

const int MAJOR = 0;
const int MINOR = 0;
const int REVISION = 1;

void Computer::boot(Config* cfg) {
    this->cfg = cfg;
    cpu.create_cores(cfg->nbr_cpus);
}

void Computer::run() {}

void Computer::shutdown() {}

Computer::Computer() {
    boot(this->cfg);
}

Computer::~Computer() {
}
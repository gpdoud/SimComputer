#include "Computer.h"

const int MAJOR = 0;
const int MINOR = 0;
const int REVISION = 1;

void Computer::run() {}
void Computer::setup(Config *cfg) {
    cpu.create_cores(cfg->nbr_cpus);
}
void Computer::boot() {}
void Computer::shutdown() {}

Computer::Computer(Config *cfg) {
    this->cfg = cfg;
    setup(this->cfg);
}

Computer::~Computer() {
}
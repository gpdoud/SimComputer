#include "Computer.h"
#include "Jobs.h"
#include "Logger.h"

const int MAJOR = 0;
const int MINOR = 0;
const int REVISION = 1;

void Computer::boot_up(Config* cfg) {
    this->cfg = cfg;
    cpu.create_cores(cfg->nbr_cpus);
}

void Computer::load_jobs(Jobs *jobs) {

    while(jobs->Count() > 0) {
        Job job = jobs->Pop();
        Logger::log("Job [" + job.get_desc() + "] loaded...");
    }
}

void Computer::run() {}

void Computer::shut_down() {}

Computer::Computer() {
}

Computer::~Computer() {
}
#include "Computer.h"
#include "Jobs.h"
#include "Logger.h"

const int MAJOR = 0;
const int MINOR = 0;
const int REVISION = 1;

void Computer::boot_up(Config* cfg) {
    Logger::log("boot_up()");
    this->cfg = cfg;
    cpu.create_cores(cfg->nbr_cpus);
}

void Computer::load_jobs(Jobs *jobs) {
    Logger::log("load_jobs()");
    while(jobs->Count() > 0) {
        Job job = jobs->Pop();
        jobs_queue.Push(&job);
        Logger::log(job.dump() + " loaded...");
    }
}

void Computer::run() {
    Logger::log("run()");
    for(auto idx = 0; idx < cpu.get_cores(); idx++) {
        Job job = dispatcher.Pop(&jobs_queue); // pop job from queue
        Logger::log("exec " + job.get_desc() + " on core " + std::to_string(idx));
        this->cpu.peek(idx).exec(&job); // exec current process
        dispatcher.Push(&jobs_queue, &job); // push job back on queue
    }
}

void Computer::shut_down() {
    Logger::log("shut_down()");
}

Computer::Computer() {
}

Computer::~Computer() {
    Logger::log("stop");
}
#include "Computer.h"
#include "Jobs.h"
#include "Logger.h"

const int MAJOR = 0;
const int MINOR = 0;
const int REVISION = 1;

void Computer::boot_up(Config* cfg) {
    Logger::debug("Computer::boot_up()");
    this->cfg = cfg;
    cpu.create_cores(cfg->nbr_cpus);
}

void Computer::load_jobs(Jobs *jobs) {
    Logger::debug("Computer::load_jobs()");
    while(jobs->Count() > 0) {
        Job* job = jobs->Pop();
        jobs_queue.Push(job);
        Logger::log(job->dump() + " loaded...");
    }
}

void Computer::process_cycle() {
    Logger::debug("Computer::process_cycle()");
    for(size_t idx = 0; idx < cpu.cores(); idx++) {
        if(jobs_queue.Count() == 0) // all jobs finished?
            return; // yes; done.
        Job* job = dispatcher.Pop(&jobs_queue); // pop job from queue
        Logger::log("exec job " + job->get_desc() + " on core " + std::to_string(idx));
        Core* core = cpu.peek(idx);
        if(!core->exec(job)) { // exec current process; if not done executing
            Logger::log(job->dump());
            dispatcher.Push(&jobs_queue, job); // push job back on queue
        }
    }
}

void Computer::run() {
    Logger::debug("Computer::run()");
    while(jobs_queue.Count() > 0) {
        process_cycle();
    }
}

void Computer::shut_down() {
    Logger::debug("Computer::shut_down()");
}

Computer::Computer() {
    Logger::debug("Computer::constructor()");
}

Computer::~Computer() {
    Logger::debug("Computer::destructor()");
    Logger::debug("Computer::stop");
}
#include <iostream>
#include <string>
#include "Computer.h"
#include "IntClock.h"
#include "Logger.h"
#include "Jobs.h"
#include "Job.h"

void log(std::string msg) {
    Logger::log(msg);
}
void get_job_to_run(Jobs &jobs) {
    jobs.Push(new Job("Job 1"));
    jobs.Push(new Job("Job 2"));
    jobs.Push(new Job("Job 3"));
}
int main() {

    Computer comp;

    Config cfg;
    log("boot_up()");
    comp.boot_up(&cfg);

    log("load_jobs()");
    Jobs jobs;
    get_job_to_run(jobs);
    comp.load_jobs(&jobs);

    log("run()");
    comp.run();

    log("shut_down()");
    comp.shut_down();

    log("stop.");

}
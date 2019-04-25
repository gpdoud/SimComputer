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
    Job *j1 = new Job("Job1 10 cycles");
    Process* p1 = new Process();
    p1->set_req_cycles(10);
    j1->add_process(p1);
    jobs.Push(j1);

    Job* j2 = new Job("Job2 300 cycles");
    Process* p2_1 = new Process();
    p2_1->set_req_cycles(100);
    j2->add_process(p2_1);
    Process* p2_2 = new Process();
    p2_2->set_req_cycles(200);
    j2->add_process(p2_2);
    jobs.Push(j2);

    Job* j3 = new Job("Job3 6000 cycles");
    Process* p3_1 = new Process();
    p3_1->set_req_cycles(1000);
    j3->add_process(p3_1);
    Process* p3_2 = new Process();
    p3_2->set_req_cycles(2000);
    j3->add_process(p3_2);
    Process* p3_3 = new Process();
    p3_3->set_req_cycles(3000);
    j3->add_process(p3_3);
    jobs.Push(j3);
}
int main() {

    Computer comp;

    Config cfg;
    comp.boot_up(&cfg);

    Jobs jobs;
    get_job_to_run(jobs);
    comp.load_jobs(&jobs);

    comp.run();

    comp.shut_down();
}
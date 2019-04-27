#include "Process_Queue.h"

Process* Process_Queue::current() {
    return curr_process;
}
Process_Queue& Process_Queue::current(Process* process) {
    curr_process = process;
    return *this;
}
void Process_Queue::Push(Process* process) {
    if(processes.size() == 0)
        curr_process = process;
    processes.push_back(process);
}
Process* Process_Queue::Pop() {
    Process* proc = Peek();
    processes.pop_front();
    return proc;
}
Process* Process_Queue::Peek() {
    return processes.front();
}
std::list<Process*>::iterator Process_Queue::begin() {
    return processes.begin();
}
std::list<Process*>::iterator Process_Queue::end() {
    return processes.end();
}
Process_Queue::Process_Queue() {
    processes = std::list<Process*>();
}

Process_Queue::~Process_Queue() {
}

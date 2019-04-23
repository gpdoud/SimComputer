#include "Process_Queue.h"

std::vector<Process> Process_Queue::to_vector() {
    std::vector<Process> proc_list;
    auto deq = processes._Get_container();
    for(auto ptr = deq.begin(); ptr != deq.end(); ptr++) {
        proc_list.push_back(*ptr);
    }
    return proc_list;
}

void Process_Queue::Push(const Process& process) {
    processes.push(process);
}
Process Process_Queue::Pop() {
    Process proc = processes.front();
    processes.pop();
    return proc;
}
Process Process_Queue::Peek() {
    return processes.front();
}
Process_Queue::Process_Queue() {
}

Process_Queue::~Process_Queue() {
}

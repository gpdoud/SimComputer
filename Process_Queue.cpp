#include "Process_Queue.h"

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

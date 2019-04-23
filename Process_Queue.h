#pragma once
#include <queue>
#include "Process.h"

class Process_Queue {
    std::queue<Process> processes;
public:
    std::vector<Process> to_vector();
    void Push(const Process& process);
    Process Pop();
    Process Peek();
    Process_Queue();
    ~Process_Queue();
};

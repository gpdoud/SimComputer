#pragma once
#include <queue>
#include "Process.h"

class Process_Queue {
    std::queue<Process> processes;
public:
    void Push(const Process& process);
    Process Pop();
    Process Peek();
    Process_Queue();
    ~Process_Queue();
};

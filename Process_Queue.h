#pragma once
#include <list>
#include "Process.h"

class Process_Queue {
    std::list<Process*> processes;
    //Process* curr_process = nullptr;
public:
    //Process* current();
    //Process_Queue& current(Process* process);
    void Push(Process* process);
    Process* Pop();
    Process* Peek();
    std::list<Process*>::iterator begin();
    std::list<Process*>::iterator end();
    Process_Queue();
    ~Process_Queue();
};

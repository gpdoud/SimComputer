#pragma once
#include <windows.h>

enum STATE { STATE_NEW, STATE_READY, STATE_RUN, STATE_BLOCK, 
    STATE_COMPLETE, STATE_SUSPENDED_READY, STATE_SUSPENDED_BLOCK, STATE_ERROR };

class Process {
    GUID guid;
    STATE state;
    int req_cycles;
    int comp_cycles;
public:
    int get_req_cycles();
    void set_req_cycles(int cycles);
    int get_comp_cycles();
    void set_comp_cycles(int cycles);
    void inc_comp_cycles(int cycles);
    Process();
    ~Process();
};
#include "Process.h"
#include <combaseapi.h>

GUID Process::get_guid() {
    return guid;
}

int Process::get_req_cycles() {
    return req_cycles;
}

void Process::set_req_cycles(int cycles) {
    req_cycles = cycles;
}

int Process::get_comp_cycles() {
    return comp_cycles;
}

void Process::set_comp_cycles(int cycles) {
    comp_cycles = cycles;
}

void Process::inc_comp_cycles(int cycles = 1) {
    comp_cycles += cycles;
}

Process::Process() {
    state = STATE_ERROR;
    HRESULT rc = CoCreateGuid(&guid);
    if(rc == S_OK)
        state = STATE_NEW;
    req_cycles = 1;
    comp_cycles = 0;
}
Process::~Process() {}

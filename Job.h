#pragma once
#include <string>
#include "Process_Queue.h"

class Job
{
    int id;
    std::string desc;
    Process_Queue* pq;

public:
    int get_id();
    std::string get_desc();
    void set_desc(std::string desc);
    const std::string TYPE = "Job";
    Process_Queue* get_pq();
    void add_process(Process* p);
    std::string dump();
	Job();
    Job(std::string desc);
	~Job();

};


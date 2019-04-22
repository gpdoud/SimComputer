#pragma once
#include <string>

class Job
{
    int id;
    std::string desc;

public:
    int get_id();
    std::string get_desc();
    void set_desc(std::string desc);
    const std::string TYPE = "Job";
	Job();
    Job(std::string desc);
	~Job();

};


#pragma once
#include <string>

class Job
{
    std::string desc;

public:
    std::string get_desc();
    void set_desc(std::string desc);
    const std::string TYPE = "Job";
	Job();
    Job(std::string desc);
	~Job();

private:

};


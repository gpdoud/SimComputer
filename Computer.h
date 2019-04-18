#pragma once

#include <string>

#include "IntClock.h"
#include "Jobs.h"

using namespace std;

class Computer {

public:
	void log(const string &msg);
	void log(const stringstream &sstr);
	void boot();
	void cycle();
	void shutdown();
	Computer();
	~Computer();

	static void Tick() {
		cout << "Computer::Tick" << endl;
	}

private:
	//IntClock clock;
	Jobs submitted;
	void load_jobs();
	bool ask_if_done();
	string version();
};
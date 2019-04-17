#pragma once

#include <string>

#include "IntClock.h"
#include "Jobs.h"

using namespace std;

class Mainline {

public:
	void log(const string &msg);
	void log(const stringstream &sstr);
	void boot();
	void cycle();
	void shutdown();
	Mainline();
	~Mainline();

	static void Tick() {
		cout << "Mainline::Tick" << endl;
	}

private:
	//IntClock clock;
	Jobs submitted;
	void load_jobs();
	bool ask_if_done();
	string version();
};
#pragma once

#include <string>

#include "IntClock.h"

using namespace std;

class Mainline {

public:
	void log(const string &msg);
	void log(const stringstream &sstr);
	void boot();
	void shutdown();
	Mainline();
	~Mainline();

	static void Tick() {
		cout << "Mainline::Tick" << endl;
	}

private:
	IntClock clock;
	string version();
};
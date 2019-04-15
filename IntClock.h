#pragma once

#include <chrono>
#include <ctime>
#include <thread>

using namespace std;
using namespace chrono;

class IntClock {

public:

	IntClock() {};
	~IntClock() {};

private:
	long clock = 0;
	void running_clock() {
		for(;;) { // forever
			this_thread::sleep_for(seconds(1));
			clock++;
		}
	}
};


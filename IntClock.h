#pragma once

#include <iostream>
#include <algorithm>
#include <chrono>
#include <ctime>
#include <thread>
#include <vector>

using namespace std;
using namespace chrono;

typedef void (*Pevt)();

class IntClock {

public:
	void add_event(Pevt& evt) {
		events.push_back(evt);
	}
	void operator+=(Pevt& evt) {
		add_event(evt);
	}
	void start_clock() {
		for(auto idx = 0; idx < 5; idx++) { // 5 times
			this_thread::sleep_for(seconds(1));
			clock++;
			for(Pevt evt : events) {
				(*evt)(); // fire
			}
		}
	}
	IntClock() {};
	~IntClock() {};

private:
	vector<Pevt> events;
	long clock = 0;
};

	
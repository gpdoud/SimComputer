#include <iostream>
#include <string>
#include <sstream>
#include <chrono>
#include <ctime>

#include "Logger.h"
#include "Computer.h"
#include "IntClock.h"
#include "Utility.h"

const int MAJOR = 0;
const int MINOR = 0;
const int REVISION = 1;

void Computer::cycle() {
	log("Cycling\n");
	load_jobs();
	bool done = false;
	do {
		log("cycle\n");
	} while(!(done = ask_if_done()));
}
bool Computer::ask_if_done() {
	cout << "=> ";
	string cmd;
	getline(cin, cmd);
	DSI::String::toUpper(cmd);
	return cmd.compare("QUIT") == 0;
}
void Computer::load_jobs() {
	Job j1, j2, j3;
	submitted.Push(j1);
	submitted.Push(j2);
	submitted.Push(j3);
}
string Computer::version() {
	stringstream ver;
	ver << MAJOR << "." << MINOR << "." << REVISION;
	return ver.str();
}
void Computer::log(const string &msg) {
	Logger::log(msg);
}
void Computer::log(const stringstream &stream) {
	Logger::log(stream.str());
}
void Computer::boot() {
	stringstream sstr;
	sstr << "SimComputer"
		<< " v" << version()
		<< " - A simulation of a computer - Copyright (c) 2019 by Greg Doud All Rights Reserved. "
		<< endl;
	log(sstr);
	log("Boot\n");

	// hook the tick method
	//Pevt evt = &Tick;
	//clock += evt;

	// start processing
	//clock.start_clock();
}
void Computer::shutdown() {
	log("Shutdown\n");
}

chrono::time_point<chrono::system_clock> clock_start;
chrono::time_point<chrono::system_clock> clock_end;

Computer::Computer() {
	clock_start = chrono::system_clock::now();
}


Computer::~Computer() {
	clock_end = chrono::system_clock::now();
}
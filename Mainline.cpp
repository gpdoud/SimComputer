#include <iostream>
#include <string>
#include <sstream>
#include <chrono>
#include <ctime>

#include "Logger.h"
#include "Mainline.h"

const int MAJOR = 0;
const int MINOR = 0;
const int REVISION = 1;

string Mainline::version() {
	stringstream ver;
	ver << MAJOR << "." << MINOR << "." << REVISION;
	return ver.str();
}
void Mainline::log(const string &msg) {
	Logger::log(msg);
}
void Mainline::log(const stringstream &stream) {
	Logger::log(stream.str());
}
void Mainline::init() {
	stringstream sstr;

	sstr << "SimComputer"
		<< " v" << version()
		<< " - A simulation of a computer - Copyright (c) 2019 by Greg Doud All Rights Reserved. "
		<< endl;
	Mainline::log(sstr);

	stringstream str1;
	str1 << "Startup." << endl;
	log(str1.str());
}
void Mainline::term() {
	stringstream str;

	str << "Shutdown." << endl;
	log(str.str());
}

chrono::time_point<chrono::system_clock> clock_start;
chrono::time_point<chrono::system_clock> clock_end;

Mainline::Mainline() {
	clock_start = chrono::system_clock::now();
	this->init();
}


Mainline::~Mainline() {
	this->term();
	clock_end = chrono::system_clock::now();
}
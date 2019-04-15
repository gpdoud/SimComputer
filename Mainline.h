#pragma once

#include <string>

using namespace std;

class Mainline {

public:
	void log(const string &msg);
	void log(const stringstream &sstr);
	void init();
	void term();
	Mainline();
	~Mainline();

private:
	string version();
};
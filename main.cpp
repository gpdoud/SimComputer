#include <iostream>
#include <string>
#include <sstream>

#include "Mainline.h"
#include "IntClock.h"

using namespace std;

int main() {

	Mainline *ml = new Mainline();

	// body goes here
	ml->boot();
	ml->shutdown();

	delete ml;
}
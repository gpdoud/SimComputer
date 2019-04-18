#include <iostream>
#include <string>
#include <sstream>

#include "Computer.h"
#include "IntClock.h"

using namespace std;

int main() {

	Computer *comp = new Computer();

	// body goes here
	comp->boot();
	comp->cycle();
	comp->shutdown();

	delete comp;
}
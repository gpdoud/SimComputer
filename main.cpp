#include <iostream>
#include <string>
#include "Computer.h"
#include "IntClock.h"
#include "Logger.h"

using namespace std;

void log(std::string msg) {
    Logger::log(msg);
}
int main() {

    Config cfg;
    Computer* comp = new Computer(&cfg);

    // body goes here
    log("boot()");
    comp->boot();
    log("run()");
    comp->run();
    log("shutdown()");
    comp->shutdown();
    log("off.");

    delete comp;
}
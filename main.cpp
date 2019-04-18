#include <iostream>
#include <string>
#include "Computer.h"
#include "IntClock.h"
#include "Logger.h"

void log(std::string msg) {
    Logger::log(msg);
}
int main() {

    Computer comp;

    Config cfg;
    log("boot()");
    comp.boot(&cfg);

    log("run()");
    comp.run();

    log("shutdown()");
    comp.shutdown();

    log("stop.");

}
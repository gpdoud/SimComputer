#include "Utility.h"

void DSI::String::toUpper(std::string& str) {
	for(size_t idx = 0; idx < str.length(); idx++) {
		str[idx] = toupper(str[idx]);
	}
}

void DSI::String::toLower(std::string& str) {
	for(size_t idx = 0; idx < str.length(); idx++) {
		str[idx] = tolower(str[idx]);
	}
}

DSI::IntGenerator* DSI::IntGenerator::create_instance() {
    if(self == nullptr)
        self = new IntGenerator();
    return self;
}
int DSI::IntGenerator::next() {
    return nextId++;
}
DSI::IntGenerator::IntGenerator() {
    nextId = 1;
}
DSI::IntGenerator::~IntGenerator() {
}

#include "Utility.h"

void DSI::String::toUpper(std::string& str) {
	for(int idx = 0; idx < str.length(); idx++) {
		str[idx] = toupper(str[idx]);
	}
}

void DSI::String::toLower(std::string& str) {
	for(int idx = 0; idx < str.length(); idx++) {
		str[idx] = tolower(str[idx]);
	}
}

DSI::IntGenerator* DSI::IntGenerator::create_instance() {
    self = new IntGenerator();
    return self;
}
DSI::IntGenerator::IntGenerator() {
    nextId = 1;
}
DSI::IntGenerator::~IntGenerator() {
}

DSI::IntGenerator *self;
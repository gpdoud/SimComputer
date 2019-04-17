

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

DSI::String::String() {}
DSI::String::~String() {}
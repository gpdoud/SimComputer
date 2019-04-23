#pragma once
#include <sstream>
#include <string>
#include <cctype>

namespace DSI {

	class String {
	public:
		static void toUpper(std::string& str);
		static void toLower(std::string& str);
	};
}

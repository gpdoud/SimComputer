#pragma once
#include <sstream>
#include <string>
#include <cctype>

namespace DSI {

    class IntGenerator {
        int nextId;
    public:
        static IntGenerator create_instance();
        IntGenerator();
        ~IntGenerator();
    };

	class String {
	public:
		static void toUpper(std::string& str);
		static void toLower(std::string& str);
	};
}
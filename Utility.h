#pragma once
#include <sstream>
#include <string>
#include <cctype>

namespace DSI {

    class IntGenerator {
        int nextId;
    public:
        static IntGenerator* create_instance();
        int next();
        IntGenerator();
        ~IntGenerator();
    };
    static IntGenerator* self = nullptr;

	class String {
	public:
		static void toUpper(std::string& str);
		static void toLower(std::string& str);
	};
}

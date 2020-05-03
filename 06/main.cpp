#include <cassert>
#include "format.h"

bool test1() {
	std::string msg("First test");
	try {
		if (format("p0: {0}; p1: {1}; p2: {2}", '0', 1, "2") == "p0: 0; p1: 1; p2: 2") {
			std::cout << " passed: " << msg << "\n";
			return true;
		}
		else {
			std::cout << "not  passed: " << msg << "\n";
			return false;
		}
	}
	catch (std::runtime_error & e) {
		std::cout << "not  passed: " << msg << "\n";
		return false;
	}
}

bool test2() {
	std::string msg(" }");
	try {
		std::string s = format("abc 0}", '1');
		std::cout << "not  passed: " << msg << "\n";
		return false;
	}
	catch (std::runtime_error & e) {
		std::cout << " passed: " << msg << "\n";
		return true;
	}
}

bool test3() {
	std::string msg(" }}}");
	try {
		std::string s = format("abc}}} 0}", '1');
		std::cout << "not  passed: " << msg << "\n";
		return false;
	}
	catch (std::runtime_error & e) {
		std::cout << " passed: " << msg << "\n";
		return true;
	}
}

bool test4() {
	std::string msg("not closed }");
	try {
		std::string s = format("abc {0}}", '1');
		std::cout << "not  passed: " << msg << "\n";
		return false;
	}
	catch (std::runtime_error & e) {
		std::cout << " passed: " << msg << "\n";
		return true;
	}
}

bool test5() {
	std::string msg("not a number in {}");
	try {
		std::string s = format("{abc }", '1');
		std::cout << "not  passed: " << msg << "\n";
		return false;
	}
	catch (std::runtime_error & e) {
		std::cout << " passed: " << msg << "\n";
		return true;
	}
}

bool test6() {
	std::string msg("empty {}");
	try {
		std::string s = format("{} abc", '1');
		std::cout << "not  passed: " << msg << "\n";
		return false;
	}
	catch (std::runtime_error & e) {
		std::cout << " passed: " << msg << "\n";
		return true;
	}
}

bool test7() {
	std::string msg(" {");
	try {
		std::string s = format("{ abc", '1');
		std::cout << "not  passed: " << msg << "\n";
		return false;
	}
	catch (std::runtime_error & e) {
		std::cout << " passed: " << msg << "\n";
		return true;
	}
}

bool test8() {
	std::string msg(" not closed {");
	try {
		std::string s = format("{0} {abc", '1');
		std::cout << "not  passed: " << msg << "\n";
		return false;
	}
	catch (std::runtime_error & e) {
		std::cout << " passed: " << msg << "\n";
		return true;
	}
}

bool test9() {
	std::string msg("incorrect number of params");
	try {
		std::string s = format("{0} {1} {2}", '1');
		std::cout << "not  passed: " << msg << "\n";
		return false;
	}
	catch (std::runtime_error & e) {
		std::cout << " passed: " << msg << "\n";
		return true;
	}
}

bool test10() {
	std::string msg("too much params");
	try {
		if (format("p0: {0} {0} {0}", '0', 1, "2") == "p0: 0 0 0") {
			std::cout << " passed: " << msg << "\n";
			return true;
		}
		else {
			std::cout << "not  passed: " << msg << "\n";
			return false;
		}
	}
	catch (std::runtime_error & e) {
		std::cout << "not  passed: " << msg << "\n";
		return false;
	}
}
int main() {

	size_t passed = 0;

	if (test1()) passed++;
	if (test2()) passed++;
	if (test3()) passed++;
	if (test4()) passed++;
	if (test5()) passed++;
	if (test6()) passed++;
	if (test7()) passed++;
	if (test8()) passed++;
	if (test9()) passed++;
	if (test10()) passed++;

	std::cout << " passedî tests: " << passed << "/10\n";

	return 0;
}
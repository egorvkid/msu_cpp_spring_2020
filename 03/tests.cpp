#include "BigInt.h"
bool test1() {
	std::string name("From string: ");
	try {
		BigInt a("123456789123456789");
		std::cout << name << ": passed\n";
		return true;
	}
	catch (...) {
		std::cout << name << ": not passed\n";
		return false;
	}
}

bool test2() {
	std::string name("Compare with int 1");
	try {
		BigInt a = 123456;
		if (a == 123456) {
			std::cout << name << ": passed\n";
			return true;
		}
		else {
			std::cout << name << ": not passed\n";
			return false;
		}
	}
	catch (...) {
		std::cout << name << ": not passed\n";
		return false;
	}
}

bool test3() {
	std::string name("Compare with int 2");
	try {
		BigInt a(123456);
		if (a == 123456) {
			std::cout << name << ": passed\n";
			return true;
		}
		else {
			std::cout << name << ": not passed\n";
			return false;
		}
	}
	catch (...) {
		std::cout << name << ": not passed\n";
		return false;
	}
}

bool test4() {
	std::string name("Creation zero by default");
	try {
		BigInt a;
		if (a == 0 and a == BigInt("0")) {
			std::cout << name << ": passed\n";
			return true;
		}
		else {
			std::cout << name << ": not passed\n";
			return false;
		}
	}
	catch (...) {
		std::cout << name << ": not passed\n";
		return false;
	}
}

bool test5() {
	std::string name("Negative 1");
	try {
		BigInt a("-12345");
		if (a == -12345) {
			std::cout << name << ": passed\n";
			return true;
		}
		else {
			std::cout << name << ": not passed\n";
			return false;
		}
	}
	catch (...) {
		std::cout << name << ": not passed\n";
		return false;
	}
}


bool test6() {
	std::string name("Negative 2");
	try {
		BigInt a("-123456789123456789");
		BigInt b("123456789123456789");
		if (!a.get_sign() and a.abs_eq(b)) {
			std::cout << name << ": passed\n";
			return true;
		}
		else {
			std::cout << name << ": not passed\n";
			return false;
		}
	}
	catch (...) {
		std::cout << name << ": not passed\n";
		return false;
	}
}

bool test7() {
	std::string name("From string starting with zeros");
	try {
		BigInt a("-0000000000000123456789123456789");
		BigInt b("0000000000000123456789123456789");
		BigInt a2("-123456789123456789");
		BigInt b2("123456789123456789");
		if (a == a2 and b == b2) {
			std::cout << name << ": passed\n";
			return true;
		}
		else {
			std::cout << name << ": not passed\n";
			return false;
		}
	}
	catch (...) {
		std::cout << name << ": not passed\n";
		return false;
	}
}


bool test8() {
	std::string name("More 1");
	try {
		BigInt a("123456789123456789");
		BigInt b("123456789023456789");
		if (a > b) {
			std::cout << name << ": passed\n";
			return true;
		}
		else {
			std::cout << name << ": not passed\n";
			return false;
		}
	}
	catch (...) {
		std::cout << name << ": not passed\n";
		return false;
	}
}

bool test9() {
	std::string name("More 2");
	try {
		BigInt a("123456789");
		BigInt b("-123456789223456789");
		if (a > b) {
			std::cout << name << ": passed\n";
			return true;
		}
		else {
			std::cout << name << ": not passed\n";
			return false;
		}
	}
	catch (...) {
		std::cout << name << ": not passed\n";
		return false;
	}
}

bool test10() {
	std::string name("More 3");
	try {
		BigInt a("123456789");
		BigInt b("123");
		if (a > b) {
			std::cout << name << ": passed\n";
			return true;
		}
		else {
			std::cout << name << ": not passed\n";
			return false;
		}
	}
	catch (...) {
		std::cout << name << ": not passed\n";
		return false;
	}
}


bool test11() {
	std::string name("Less 1");
	try {
		BigInt a("123456789123456789");
		BigInt b("123456789023456789");
		if (b < a) {
			std::cout << name << ": passed\n";
			return true;
		}
		else {
			std::cout << name << ": not passed\n";
			return false;
		}
	}
	catch (...) {
		std::cout << name << ": not passed\n";
		return false;
	}
}

bool test12() {
	std::string name("Less 2");
	try {
		BigInt a("123456789");
		BigInt b("-123456789223456789");
		if (b < a) {
			std::cout << name << ": passed\n";
			return true;
		}
		else {
			std::cout << name << ": not passed\n";
			return false;
		}
	}
	catch (...) {
		std::cout << name << ": not passed\n";
		return false;
	}
}

bool test13() {
	std::string name("Less 3");
	try {
		BigInt a("123456789");
		BigInt b("123");
		if (b < a) {
			std::cout << name << ": passed\n";
			return true;
		}
		else {
			std::cout << name << ": not passed\n";
			return false;
		}
	}
	catch (...) {
		std::cout << name << ": not passed\n";
		return false;
	}
}

bool test14() {
	std::string name("More and equal 1");
	try {
		BigInt a("123456789123456789");
		BigInt b("123456789023456789");
		if (a >= b) {
			std::cout << name << ": passed\n";
			return true;
		}
		else {
			std::cout << name << ": not passed\n";
			return false;
		}
	}
	catch (...) {
		std::cout << name << ": not passed\n";
		return false;
	}
}

bool test15() {
	std::string name("More and equal 2");
	try {
		BigInt a("123456789");
		BigInt b("-123456789223456789");
		if (a >= b) {
			std::cout << name << ": passed\n";
			return true;
		}
		else {
			std::cout << name << ": not passed\n";
			return false;
		}
	}
	catch (...) {
		std::cout << name << ": not passed\n";
		return false;
	}
}

bool test16() {
	std::string name("More and equal 3");
	try {
		BigInt a("123456789");
		BigInt b("123");
		if (a >= b) {
			std::cout << name << ": passed\n";
			return true;
		}
		else {
			std::cout << name << ": not passed\n";
			return false;
		}
	}
	catch (...) {
		std::cout << name << ": not passed\n";
		return false;
	}
}

bool test17() {
	std::string name("More and equal 4");
	try {
		BigInt a("123456789123456789");
		BigInt b("123456789123456789");
		if (a >= b) {
			std::cout << name << ": passed\n";
			return true;
		}
		else {
			std::cout << name << ": not passed\n";
			return false;
		}
	}
	catch (...) {
		std::cout << name << ": not passed\n";
		return false;
	}
}

bool test18() {
	std::string name("More and equal 5");
	try {
		BigInt a("-123456789123456789");
		BigInt b("-123456789123456789");
		if (a >= b) {
			std::cout << name << ": passed\n";
			return true;
		}
		else {
			std::cout << name << ": not passed\n";
			return false;
		}
	}
	catch (...) {
		std::cout << name << ": not passed\n";
		return false;
	}
}

bool test19() {
	std::string name("More and equal 6");
	try {
		BigInt a("0");
		BigInt b("0");
		if (a >= b) {
			std::cout << name << ": passed\n";
			return true;
		}
		else {
			std::cout << name << ": not passed\n";
			return false;
		}
	}
	catch (...) {
		std::cout << name << ": not passed\n";
		return false;
	}
}


bool test20() {
	std::string name("Less and equal 1");
	try {
		BigInt a("123456789123456789");
		BigInt b("123456789023456789");
		if (b <= a) {
			std::cout << name << ": passed\n";
			return true;
		}
		else {
			std::cout << name << ": not passed\n";
			return false;
		}
	}
	catch (...) {
		std::cout << name << ": not passed\n";
		return false;
	}
}

bool test21() {
	std::string name("Less and equal 2");
	try {
		BigInt a("123456789");
		BigInt b("-123456789223456789");
		if (b <= a) {
			std::cout << name << ": passed\n";
			return true;
		}
		else {
			std::cout << name << ": not passed\n";
			return false;
		}
	}
	catch (...) {
		std::cout << name << ": not passed\n";
		return false;
	}
}

bool test22() {
	std::string name("Less and equal 3");
	try {
		BigInt a("123456789");
		BigInt b("123");
		if (b <= a) {
			std::cout << name << ": passed\n";
			return true;
		}
		else {
			std::cout << name << ": not passed\n";
			return false;
		}
	}
	catch (...) {
		std::cout << name << ": not passed\n";
		return false;
	}
}

bool test23() {
	std::string name("Less and equal 4");
	try {
		BigInt a("123456789123456789");
		BigInt b("123456789123456789");
		if (b <= a) {
			std::cout << name << ": passed\n";
			return true;
		}
		else {
			std::cout << name << ": not passed\n";
			return false;
		}
	}
	catch (...) {
		std::cout << name << ": not passed\n";
		return false;
	}
}

bool test24() {
	std::string name("Less and equal 5");
	try {
		BigInt a("-123456789123456789");
		BigInt b("-123456789123456789");
		if (b <= a) {
			std::cout << name << ": passed\n";
			return true;
		}
		else {
			std::cout << name << ": not passed\n";
			return false;
		}
	}
	catch (...) {
		std::cout << name << ": not passed\n";
		return false;
	}
}

bool test25() {
	std::string name("Less and equal 6");
	try {
		BigInt a("0");
		BigInt b("0");
		if (b <= a) {
			std::cout << name << ": passed\n";
			return true;
		}
		else {
			std::cout << name << ": not passed\n";
			return false;
		}
	}
	catch (...) {
		std::cout << name << ": not passed\n";
		return false;
	}
}

bool test26() {
	std::string name("unary minus 1");
	try {
		BigInt a("123456789");
		BigInt b = -a;
		if (a == -b and -a == b) {
			std::cout << name << ": passed\n";
			return true;
		}
		else {
			std::cout << name << ": not passed\n";
			return false;
		}
	}
	catch (...) {
		std::cout << name << ": not passed\n";
		return false;
	}
}

bool test27() {
	std::string name("unary minus 2");
	try {
		BigInt a("123456789");
		BigInt b = -a;
		if (a.abs_eq(b) and !b.get_sign()) {
			std::cout << name << ": passed\n";
			return true;
		}
		else {
			std::cout << name << ": not passed\n";
			return false;
		}
	}
	catch (...) {
		std::cout << name << ": not passed\n";
		return false;
	}
}

bool test28() {
	std::string name("Concatenate 1");
	try {
		BigInt a("123456789");
		BigInt b("923456789");
		BigInt c("1046913578");
		if (a + b == c) {
			std::cout << name << ": passed\n";
			return true;
		}
		else {
			std::cout << name << ": not passed\n";
			return false;
		}
	}
	catch (...) {
		std::cout << name << ": not passed\n";
		return false;
	}
}

bool test29() {
	std::string name("Concatenate 2");
	try {
		BigInt a("123456789");
		BigInt b("-123456789");
		BigInt c("0");
		if (a + b == c) {
			std::cout << name << ": passed\n";
			return true;
		}
		else {
			std::cout << name << ": not passed\n";
			return false;
		}
	}
	catch (...) {
		std::cout << name << ": not passed\n";
		return false;
	}
}

bool test30() {
	std::string name("Concatenate 3");
	try {
		BigInt a("-123456789");
		BigInt b("123456789");
		BigInt c("0");
		if (a + b == c) {
			std::cout << name << ": passed\n";
			return true;
		}
		else {
			std::cout << name << ": not passed\n";
			return false;
		}
	}
	catch (...) {
		std::cout << name << ": not passed\n";
		return false;
	}
}

bool test31() {
	std::string name("Concatenate 4");
	try {
		BigInt a("-123456789");
		BigInt b("923456789");
		BigInt c("800000000");
		if (a + b == c) {
			std::cout << name << ": passed\n";
			return true;
		}
		else {
			std::cout << name << ": not passed\n";
			return false;
		}
	}
	catch (...) {
		std::cout << name << ": not passed\n";
		return false;
	}
}


bool test32() {
	std::string name("Concatenate 5");
	try {
		BigInt a("923456789");
		BigInt b("-123456789");
		BigInt c("800000000");
		if (a + b == c) {
			std::cout << name << ": passed\n";
			return true;
		}
		else {
			std::cout << name << ": not passed\n";
			return false;
		}
	}
	catch (...) {
		std::cout << name << ": not passed\n";
		return false;
	}
}


bool test33() {
	std::string name("Concatenate 6");
	try {
		BigInt a("-923456789");
		BigInt b("123456789");
		BigInt c("-800000000");
		if (a + b == c) {
			std::cout << name << ": passed\n";
			return true;
		}
		else {
			std::cout << name << ": not passed\n";
			return false;
		}
	}
	catch (...) {
		std::cout << name << ": not passed\n";
		return false;
	}
}

bool test34() {
	std::string name("Concatenate 7");
	try {
		BigInt a("123456789");
		BigInt b("-923456789");
		BigInt c("-800000000");
		if (a + b == c) {
			std::cout << name << ": passed\n";
			return true;
		}
		else {
			std::cout << name << ": not passed\n";
			return false;
		}
	}
	catch (...) {
		std::cout << name << ": not passed\n";
		return false;
	}
}

bool test35() {
	std::string name("Substraction 1");
	try {
		BigInt a("123456789");
		BigInt b("923456789");
		BigInt c("-800000000");
		if (a - b == c) {
			std::cout << name << ": passed\n";
			return true;
		}
		else {
			std::cout << name << ": not passed\n";
			return false;
		}
	}
	catch (...) {
		std::cout << name << ": not passed\n";
		return false;
	}
}

bool test36() {
	std::string name("Substraction 2");
	try {
		BigInt a("123456789");
		BigInt b("123456789");
		BigInt c("0");
		if (a - b == c) {
			std::cout << name << ": passed\n";
			return true;
		}
		else {
			std::cout << name << ": not passed\n";
			return false;
		}
	}
	catch (...) {
		std::cout << name << ": not passed\n";
		return false;
	}
}

bool test37() {
	std::string name("Substraction 3");
	try {
		BigInt a("-123456789");
		BigInt b("123456789");
		BigInt c("-246913578");
		if (a - b == c) {
			std::cout << name << ": passed\n";
			return true;
		}
		else {
			std::cout << name << ": not passed\n";
			return false;
		}
	}
	catch (...) {
		std::cout << name << ": not passed\n";
		return false;
	}
}

bool test38() {
	std::string name("Substraction 4");
	try {
		BigInt a("-123456789");
		BigInt b("-123456789");
		BigInt c("0");
		if (a - b == c) {
			std::cout << name << ": passed\n";
			return true;
		}
		else {
			std::cout << name << ": not passed\n";
			return false;
		}
	}
	catch (...) {
		std::cout << name << ": not passed\n";
		return false;
	}
}


bool test39() {
	std::string name("Substraction 5");
	try {
		BigInt a("923456789");
		BigInt b("-123456789");
		BigInt c("1046913578");
		if (a - b == c) {
			std::cout << name << ": passed\n";
			return true;
		}
		else {
			std::cout << name << ": not passed\n";
			return false;
		}
	}
	catch (...) {
		std::cout << name << ": not passed\n";
		return false;
	}
}


bool test40() {
	std::string name("Substraction 6");
	try {
		BigInt a("-923456789");
		BigInt b("-123456789");
		BigInt c("-800000000");
		if (a - b == c) {
			std::cout << name << ": passed\n";
			return true;
		}
		else {
			std::cout << name << ": not passed\n";
			return false;
		}
	}
	catch (...) {
		std::cout << name << ": not passed\n";
		return false;
	}
}

bool test41() {
	std::string name("Concatenation inplace 1");
	try {
		BigInt a("123456789");
		BigInt b("923456789");
		BigInt c("1046913578");
		a += b;
		if (a == c) {
			std::cout << name << ": passed\n";
			return true;
		}
		else {
			std::cout << name << ": not passed\n";
			return false;
		}
	}
	catch (...) {
		std::cout << name << ": not passed\n";
		return false;
	}
}

bool test42() {
	std::string name("Concatenation inplace 2");
	try {
		BigInt a("123456789");
		BigInt b("-123456789");
		BigInt c("0");
		a += b;
		if (a == c) {
			std::cout << name << ": passed\n";
			return true;
		}
		else {
			std::cout << name << ": not passed\n";
			return false;
		}
	}
	catch (...) {
		std::cout << name << ": not passed\n";
		return false;
	}
}

bool test43() {
	std::string name("Concatenation inplace 3");
	try {
		BigInt a("-123456789");
		BigInt b("123456789");
		BigInt c("0");
		a += b;
		if (a == c) {
			std::cout << name << ": passed\n";
			return true;
		}
		else {
			std::cout << name << ": not passed\n";
			return false;
		}
	}
	catch (...) {
		std::cout << name << ": not passed\n";
		return false;
	}
}

bool test44() {
	std::string name("Concatenation inplace 4");
	try {
		BigInt a("-123456789");
		BigInt b("923456789");
		BigInt c("800000000");
		a += b;
		if (a == c) {
			std::cout << name << ": passed\n";
			return true;
		}
		else {
			std::cout << name << ": not passed\n";
			return false;
		}
	}
	catch (...) {
		std::cout << name << ": not passed\n";
		return false;
	}
}


bool test45() {
	std::string name("Concatenation inplace 5");
	try {
		BigInt a("923456789");
		BigInt b("-123456789");
		BigInt c("800000000");
		a += b;
		if (a == c) {
			std::cout << name << ": passed\n";
			return true;
		}
		else {
			std::cout << name << ": not passed\n";
			return false;
		}
	}
	catch (...) {
		std::cout << name << ": not passed\n";
		return false;
	}
}


bool test46() {
	std::string name("Concatenation inplace 6");
	try {
		BigInt a("-923456789");
		BigInt b("123456789");
		BigInt c("-800000000");
		a += b;
		if (a == c) {
			std::cout << name << ": passed\n";
			return true;
		}
		else {
			std::cout << name << ": not passed\n";
			return false;
		}
	}
	catch (...) {
		std::cout << name << ": not passed\n";
		return false;
	}
}

bool test47() {
	std::string name("Concatenation inplace 7");
	try {
		BigInt a("123456789");
		BigInt b("-923456789");
		BigInt c("-800000000");
		a += b;
		if (a == c) {
			std::cout << name << ": passed\n";
			return true;
		}
		else {
			std::cout << name << ": not passed\n";
			return false;
		}
	}
	catch (...) {
		std::cout << name << ": not passed\n";
		return false;
	}
}

bool test48() {
	std::string name("Substraction inplace 1");
	try {
		BigInt a("123456789");
		BigInt b("923456789");
		BigInt c("-800000000");
		a -= b;
		if (a == c) {
			std::cout << name << ": passed\n";
			return true;
		}
		else {
			std::cout << name << ": not passed\n";
			return false;
		}
	}
	catch (...) {
		std::cout << name << ": not passed\n";
		return false;
	}
}

bool test49() {
	std::string name("Substraction inplace 2");
	try {
		BigInt a("123456789");
		BigInt b("123456789");
		BigInt c("0");
		a -= b;
		if (a == c) {
			std::cout << name << ": passed\n";
			return true;
		}
		else {
			std::cout << name << ": not passed\n";
			return false;
		}
	}
	catch (...) {
		std::cout << name << ": not passed\n";
		return false;
	}
}

bool test50() {
	std::string name("Substraction inplace 3");
	try {
		BigInt a("-123456789");
		BigInt b("123456789");
		BigInt c("-246913578");
		a -= b;
		if (a == c) {
			std::cout << name << ": passed\n";
			return true;
		}
		else {
			std::cout << name << ": not passed\n";
			return false;
		}
	}
	catch (...) {
		std::cout << name << ": not passed\n";
		return false;
	}
}

bool test51() {
	std::string name("Substraction inplace 4");
	try {
		BigInt a("-123456789");
		BigInt b("-123456789");
		BigInt c("0");
		a -= b;
		if (a == c) {
			std::cout << name << ": passed\n";
			return true;
		}
		else {
			std::cout << name << ": not passed\n";
			return false;
		}
	}
	catch (...) {
		std::cout << name << ": not passed\n";
		return false;
	}
}


bool test52() {
	std::string name("Substraction inplace 5");
	try {
		BigInt a("923456789");
		BigInt b("-123456789");
		BigInt c("1046913578");
		a -= b;
		if (a == c) {
			std::cout << name << ": passed\n";
			return true;
		}
		else {
			std::cout << name << ": not passed\n";
			return false;
		}
	}
	catch (...) {
		std::cout << name << ": not passed\n";
		return false;
	}
}


bool test53() {
	std::string name("Substraction inplace 6");
	try {
		BigInt a("-923456789");
		BigInt b("-123456789");
		BigInt c("-800000000");
		a -= b;
		if (a == c) {
			std::cout << name << ": passed\n";
			return true;
		}
		else {
			std::cout << name << ": not passed\n";
			return false;
		}
	}
	catch (...) {
		std::cout << name << ": not passed\n";
		return false;
	}
}


bool test54() {
	std::string name("to str");
	try {
		BigInt a("923456789");
		BigInt b("-123456789");
		BigInt c("-000000000123456789");
		BigInt d("000000000923456789");

		std::string as = a.to_str();
		std::string bs = b.to_str();
		std::string cs = c.to_str();
		std::string ds = d.to_str();

		if (as == "923456789" and bs == "-123456789"
			and cs == "-123456789" and ds == "923456789")
		{
			std::cout << name << ": passed\n";
			return true;
		}
		else {
			std::cout << name << ": not passed\n";
			return false;
		}
	}
	catch (...) {
		std::cout << name << ": not passed\n";
		return false;
	}
}


bool test55() {
	std::string name("operator<<");
	try {
		BigInt a("-923456789");
		BigInt b("-123456789");
		BigInt c("-800000000");
		std::cout << "Printing BigInt " << a << " " << b << " " << c << "\n";

		std::cout << name << ": passed\n";
		return true;
	}
	catch (...) {
		std::cout << name << ": not passed\n";
		return false;
	}
}
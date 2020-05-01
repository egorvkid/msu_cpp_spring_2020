#include "Data.h"
#include <sstream>
#include <cassert>

bool test1() {
	Data x{ 12345, true, 45678 };

	std::stringstream stream;

	Serializer serializer(stream);
	assert(serializer.save(x) == Error::NoError);

	Data y{ 5456, false, 8977 };

	Deserializer deserializer(stream);
	const Error err = deserializer.load(y);

	assert(err == Error::NoError);

	assert(x.a == y.a);
	assert(x.b == y.b);
	assert(x.c == y.c);

	std::cout << "First test passed\n";

	return true;
}

bool test2() {
	std::stringstream s("78 false 4521");

	Data a;
	Deserializer des(s);

	const Error err = des.load(a);

	assert(err == Error::NoError);

	assert(a.a == 78);
	assert(a.b == false);
	assert(a.c == 4521);

	std::cout << "Second test passed\n";

	return true;
}

bool test3() {
	std::stringstream s("78 27519 4521");

	Data a;
	Deserializer des(s);

	const Error err = des.load(a);

	assert(err == Error::CorruptedArchive);

	std::cout << "Third test passed\n";

	return true;
}

bool test4() {
	std::stringstream s("-78 true 763");

	Data a;
	Deserializer des(s);

	const Error err = des.load(a);

	assert(err == Error::CorruptedArchive);

	std::cout << "Fourth test passed\n";

	return true;
}

bool test5() {
	std::stringstream s("78 true -763");

	Data a;
	Deserializer des(s);

	const Error err = des.load(a);

	assert(err == Error::CorruptedArchive);

	std::cout << "Fifth test passed\n";

	return true;
}

int main() {

	int passed = 0;

	if (test1()) passed++;
	if (test2()) passed++;
	if (test3()) passed++;
	if (test4()) passed++;
	if (test5()) passed++;

	std::cout << "Tests passed: " << passed << "/5\n";

	return 0;
}
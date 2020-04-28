#include "BigInt.h"
#include "tests.h"

int main() {
	std::cout << "Examples of using BigInt: \n";

	BigInt a("-0000123456789");
	std::cout << "From string: BigInt a(\"-0000123456789\"); a = " << a << "\n";

	BigInt b = 123;
	std::cout << "From int: BigInt b = 123; b = " << b << "\n";

	std::cout << "BigInt concatenation: a + b = " << a + b << "\n";
	std::cout << "Substraction: a - b = " << a - b << "\n";

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
	if (test11()) passed++;
	if (test12()) passed++;
	if (test13()) passed++;
	if (test14()) passed++;
	if (test15()) passed++;
	if (test16()) passed++;
	if (test17()) passed++;
	if (test18()) passed++;
	if (test19()) passed++;
	if (test20()) passed++;
	if (test21()) passed++;
	if (test22()) passed++;
	if (test23()) passed++;
	if (test24()) passed++;
	if (test25()) passed++;
	if (test26()) passed++;
	if (test27()) passed++;
	if (test28()) passed++;
	if (test29()) passed++;
	if (test30()) passed++;
	if (test31()) passed++;
	if (test32()) passed++;
	if (test33()) passed++;
	if (test34()) passed++;
	if (test35()) passed++;
	if (test36()) passed++;
	if (test37()) passed++;
	if (test38()) passed++;
	if (test39()) passed++;
	if (test40()) passed++;
	if (test41()) passed++;
	if (test42()) passed++;
	if (test43()) passed++;
	if (test44()) passed++;
	if (test45()) passed++;
	if (test46()) passed++;
	if (test47()) passed++;
	if (test48()) passed++;
	if (test49()) passed++;
	if (test50()) passed++;
	if (test51()) passed++;
	if (test52()) passed++;
	if (test53()) passed++;
	if (test54()) passed++;
	if (test55()) passed++;

	std::cout << "tests passed: " << passed << "/55\n";

	return 0;
}
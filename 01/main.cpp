#include <iostream>
#include <cstdlib>
#include "LinearAllocator.h"

using namespace std;

int numTest = 0;

void test1(int maxSize, int num)
{
	numTest += 1;
	cout << "test 1 without reset" << numTest << "\n";
	cout << " MaxSize value: " << maxSize << "\n";
	if (makeAllocator(maxSize))
	{
		cout << "Allocation error!\n";
		return;
	}
	cout << "Array bytes: " << num << "\n";
	char* c = alloc(num);

	if (c == nullptr)
	{
		cout << "Exceeded allocated memory!\n";
	}
	else cout << "Success\n";
	freeAllocator();
}


void test2(int maxSize, int num1, int num2)
{
	numTest += 1;

	cout << "test 2 with reset" << numTest << "\n";

	cout << "MaxSize value: " << maxSize << "\n";
	if (makeAllocator(maxSize))
	{
		cout << "Allocation error!\n";
		return;
	}
	cout << "Array 1 bytes: " << num1 << "\n";
	char* c1 = alloc(num1);
	if (c1 == nullptr)
	{
		cout << "Exceeded allocated memory!\n";
	}
	else cout << "Success\n";
	cout << "array 2 bytes: " << num2 << "\n";
	char* c2 = alloc(num2);
	if (c2 == nullptr)
	{
		cout << "Exceeded allocated memory!\n";
		cout << "Memory clear\n";
		reset();
		c2 = alloc(num2);
		if (c2 != nullptr)
		{
			cout << "Second variable success!\n";
		}
		else
		{
			cout << "Second variable exceeded allocated memory!\n";
		}
	}
	freeAllocator();
}
void test3(int maxSize, int num)
{
	numTest += 1;
	cout << "test 3 without reset" << numTest << "\n";
	cout << " MaxSize value: " << maxSize << "\n";
	char* c = alloc(num);
	if (makeAllocator(maxSize))
	{
		cout << "Allocation error!\n";
		return;
	}
	cout << "Array bytes: " << num << "\n";


	if (c == nullptr)
	{
		cout << "nullptr!\n";
	}
	else cout << "Success\n";
	freeAllocator();
}
void test4(int maxSize, int num)
{
	numTest += 1;
	cout << "test 4 without reset" << numTest << "\n";
	cout << " MaxSize value: " << maxSize << "\n";
	freeAllocator();
	if (makeAllocator(maxSize))
	{
		cout << "Allocation error!\n";
		return;
	}
	cout << "Array bytes: " << num << "\n";

	char* c = alloc(num);
	if (c == nullptr)
	{
		cout << "Exceeded allocated memory!\n";
	}
	else cout << "Success\n";

}


int main()
{

	test1(4, 5);
	test1(5, 4);
	test2(5, 2, 3);
	test2(5, 3, 4);
	test2(5, 3, 6);
	test3(5, 4);
	test3(4, 5);
	test4(5, 4);

	return 0;
}
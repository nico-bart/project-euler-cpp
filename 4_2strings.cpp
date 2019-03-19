#include <iostream>
#include <string>

// this function would actually create a NEW string
// and print that out. This means it allocates memory on the heap,
// just for printing. Thats not efficient!
void printString(std::string string)
{
	std::cout << string << std::endl;
}

// this function however gets the memory location of the
// original string. Thus no new string created, no memory stuff.
void printString(const std::string string&)
{
	std::cout << string << std::endl;
}


int main()
{
	std::string name1 = "Cherno"; //is actually const char array
	// double quoted stuff is always const char primzahlArray

	std::cout << name1 << std::endl;
	std::cout << name1.size() << std::endl;

	// this does not work:
	// std::string test1 = "Check one" + " two";

	// this works:
	std::string test1 = std::string("Check one") + " two";
	std::cout << test1 << std::endl;

	// or this works:
	std::string test2 = "Check one";
	test2 +=  " two";
	std::cout << test2 << std::endl;

	bool contains = test1.find("one") != std::string::npos;

	printString(test2);
}

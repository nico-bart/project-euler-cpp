#include <iostream>

int main()
{
	// pointer to char-array
	// as it is just a pointer, we cant say how long it is
	// IMMUTABLE!
	// in the memory this "String" is ended with an null terminator ( 00 )
	const char* name1 = "Cherno";

	// if we'd use doublequotes instead of single quotes this would become a
	// char pointer
	char name2[6] = { 'C', 'h', 'e', 'r', 'n', 'o'};
	char name3[7] = { 'C', 'h', 'e', 'r', 'n', 'o', '\0'};
	std::cout << name1 << std::endl;
	std::cout << strlen(name1) << std::endl;
	std::cout << name2 << std::endl;
	std::cout << name3 << std::endl;

	std::cin.get();
}

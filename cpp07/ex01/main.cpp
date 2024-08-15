#include "iter.hpp"

int main( void )
{
	char str[] = "Hello world";
	iter(str, 11, printElem<char>);
	std::cout << std::endl;

	return 0;
}
#include <iostream>
#include <limits>

int main()
{
	char test[] = "15.254";
	char *p;
	double a = -std::numeric_limits<double>::infinity();
	double t = std::strtod(test, &p);
	std::cout << *p << std::endl;
	std::cout << a << std::endl;
}
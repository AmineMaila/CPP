#include "RPN.hpp"

int main(int ac ,char **av)
{
	if (ac != 2)
		return (std::cerr << "invalid arguments." << std::endl, 1);

	RPN calc;

	try
	{
		calc.calculate(av[1]);
	}
	catch (std::exception& err)
	{
		std::cerr << err.what() << std::endl;
	}
}
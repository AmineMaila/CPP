#include "ScalarConverter.hpp"
#include <exception>

int main(int ac, char **av)
{
	if (ac == 2)
	{
		try
		{
			ScalarConverter::convert(av[1]);
		}
		catch (std::exception& err)
		{
			std::cerr << "Error : " << err.what() << std::endl;
		}
	}
	else
		std::cout << "invalid arguments" << std::endl;
}
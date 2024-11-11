#include "PmergeMe.hpp"
#include <vector>

int main(int ac, char **av)
{

	if (ac < 2)
		return (std::cerr << "Error : invalid arguments" << std::endl, 1);

	PmergeMe FJMI;
	// Vector
	{
		try
		{
			FJMI.parseVector(ac, av);

			FJMI.runVector();
		}
		catch (std::exception& err)
		{
			std::cerr << "Error : " << err.what() << std::endl;
		}
	}

	// Deque
	{
		try
		{
			FJMI.parseDeque(ac, av);

			FJMI.runDeque();
		}
		catch (std::exception& err)
		{
			std::cerr << "Error : " << err.what() << std::endl;
		}
	}
}
#include "Span.hpp"
#include <cstdlib>
#include <exception>
#include <vector>
#include <list>

int main()
{
	// SCOPE
	{
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}

	std::cout << "---------------------------" << std::endl;

	{
		std::vector<int> vec(20000);
		std::srand(std::time(0));
		for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
			*it = std::rand();
		Span t(20000);

		t.addNumbers(vec.begin(), vec.end());

		try
		{
			t.addNumber(99);
		}
		catch (std::exception& err)
		{
			std::cerr << "Error : " << err.what() << std::endl;
		}
	}

	std::cout << "---------------------------" << std::endl;

	{
		Span sp = Span(1);

		sp.addNumber(6);

		try
		{
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (std::exception& err)
		{
			std::cerr << "Error : " << err.what() << std::endl;
		}
	}
	return 0;
}
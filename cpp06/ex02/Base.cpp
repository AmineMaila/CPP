#include "Base.hpp"
#include "B.hpp"
#include "A.hpp"
#include "C.hpp"
#include <iostream>

Base::~Base() {}

Base	*generate(void)
{
	int i;

	std::srand(std::time(0));
	i = rand() % 3;
	switch(i)
	{
		case 0:
			return(new A);
		case 1:
			return(new B);
		case 2:
			return(new C);
	}
	return (NULL);
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "The type of the object pointed to by p is A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "The type of the object pointed to by p is B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "The type of the object pointed to by p is C" << std::endl;
	else
		std::cout << "p points to unknown type or just Base" << std::endl;
}

void	identify(Base& p)
{
	try
	{
		A& a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "The type of the object referenced to by p is A" << std::endl;
	}
	catch (std::exception& err)
	{
		try
		{
			B& b = dynamic_cast<B&>(p);
			(void)b;
			std::cout << "The type of the object referenced to by p is B" << std::endl;
		}
		catch(std::exception& err)
		{
			try
			{
				C& c = dynamic_cast<C&>(p);
				(void)c;
				std::cout << "The type of the object referenced to by p is C" << std::endl;
			}
			catch (std::exception& err)
			{
				std::cout << "p references unknown type or just Base" << std::endl;
			}
		}
	}
}
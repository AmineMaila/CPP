#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <exception>

int main()
{
	try
	{
		Form f("b1", 42);
		Bureaucrat bureau1("jeff", 32);
		Bureaucrat bureau2("tim", 32);
		Bureaucrat bureau3("bob", 149);
		std::cout << bureau1 << std::endl;
		std::cout << f << std::endl;
		bureau1.signForm(f);
		bureau2.signForm(f);
		bureau3.signForm(f);
	}
	catch (std::exception& err)
	{
		std::cerr << "exception caught : " << err.what() << std::endl;
	}
}
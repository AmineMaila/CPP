#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat bureau("bob", 149);
		bureau.decGrade();
		std::cout << bureau << std::endl;
		bureau.decGrade();
	}
	catch (Bureaucrat::GradeTooHighException& err)
	{
		std::cerr << "exception caught : " << err.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException& err)
	{
		std::cerr << "exception caught : " << err.what() << std::endl;
	}
}
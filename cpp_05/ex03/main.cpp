#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
	try
	{
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");			
		Bureaucrat bureau3("brad", 15);
		bureau3.signForm(*rrf);
		bureau3.executeForm(*rrf);
		delete rrf;
	}
	catch (std::exception& err)
	{
		std::cerr << "exception caught : " << err.what() << std::endl;
	}
}
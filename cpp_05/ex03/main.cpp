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
		ShrubberyCreationForm sh("home");
		Bureaucrat bureau("jeff", 32);
		bureau.signForm(sh);
		bureau.executeForm(sh);

		std::cout << "------------------------------" << std::endl;

		RobotomyRequestForm rob("cat");
		Bureaucrat bureau1("tim", 40);
		bureau1.signForm(rob);
		bureau1.executeForm(rob);

		std::cout << "------------------------------" << std::endl;

		PresidentialPardonForm pres("criminal");
		Bureaucrat bureau2("joe", 3);
		bureau2.signForm(pres);
		bureau2.executeForm(pres);

		std::cout << "------------------------------" << std::endl;

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
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

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
	}
	catch (std::exception& err)
	{
		std::cerr << "exception caught : " << err.what() << std::endl;
	}
}
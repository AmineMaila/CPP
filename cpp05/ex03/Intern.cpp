#include "Intern.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::~Intern() {}

Intern::Intern() {}

Intern::Intern(const Intern& other)
{
	*this = other;
}

Intern& Intern::operator=(const Intern& other)
{
	(void)other;
	return (*this);
}

AForm	*Intern::makeForm(std::string name, std::string target)
{
	std::string forms[3] = {
		"robotomy request",
		"presidential pardon",
		"shrubbery creation"
	};

	AForm	*_forms[3] = {
		new RobotomyRequestForm(target),
		new PresidentialPardonForm(target),
		new ShrubberyCreationForm(target)
	};

	int i = 0;
	while (i < 3 && name != forms[i])
		i++;

	int j = 0;
	while (j < 3)
	{
		if (j != i)
			delete _forms[j];
		j++;
	}
	if (i != 3)
	{
		std::cout << "Intern creates " << _forms[i]->getName() << std::endl;
		return (_forms[i]);
	}
	throw (Intern::CouldNotCreateFormException());
	return (NULL);
}

const char * Intern::CouldNotCreateFormException::what() const throw() {return ("Couldn't create form");}
#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"

class Intern
{
public:
	~Intern();
	Intern();
	Intern(const Intern& other);
	Intern& operator=(const Intern& other);

	AForm	*makeForm(std::string name, std::string target);
};

#endif
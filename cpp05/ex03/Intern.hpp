#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"
#include <exception>

class Intern
{
public:
	~Intern();
	Intern();
	Intern(const Intern& other);
	Intern& operator=(const Intern& other);

	AForm	*makeForm(std::string name, std::string target);
	class CouldNotCreateFormException : public std::exception
	{
		virtual const char * what() const throw();
	};
};

#endif
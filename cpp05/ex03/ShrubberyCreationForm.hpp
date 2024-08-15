#ifndef  SHRUBERRYCREATIONFORM_HPP
# define SHRUBERRYCREATIONFORM_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"

class  ShrubberyCreationForm : public AForm
{
public:
	~ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const  ShrubberyCreationForm& other);
	ShrubberyCreationForm& operator=(const  ShrubberyCreationForm& other);

	virtual void execute(Bureaucrat const & executor) const ;

private:
	ShrubberyCreationForm();
	std::string	target;
};

#endif
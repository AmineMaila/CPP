#ifndef  PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"

class  PresidentialPardonForm : public AForm
{
public:
	~PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const  PresidentialPardonForm& other);
	PresidentialPardonForm& operator=(const  PresidentialPardonForm& other);

	virtual void execute(Bureaucrat const & executor) const ;

private:
	PresidentialPardonForm();
	std::string	target;
};

#endif
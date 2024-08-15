#ifndef  ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"

class  RobotomyRequestForm : public AForm
{
public:
	~RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const  RobotomyRequestForm& other);
	RobotomyRequestForm& operator=(const  RobotomyRequestForm& other);

	virtual void execute(Bureaucrat const & executor) const ;

private:
	RobotomyRequestForm();
	std::string	target;
};

#endif
#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class AForm;

class Bureaucrat
{
public:
	~Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat& other);
	Bureaucrat& operator=(const Bureaucrat& other);

	const std::string& getName(void) const;
	const int& getGrade(void) const;
	void incGrade(void);
	void decGrade(void);
	void signForm(AForm& b);

	void executeForm(AForm const & form);

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char	*what() const throw();
	};

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char	*what() const throw();
	};

private:
	Bureaucrat();
	const std::string	name;
	int					grade;
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& fat);

#endif
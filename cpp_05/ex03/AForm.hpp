#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>

class Bureaucrat;

class AForm
{
public:
	virtual ~AForm();
	AForm(std::string name, int signGrade, int execGrade);
	AForm(const AForm& other);
	AForm& operator=(const AForm& other);

	const std::string& getName(void) const;
	const int& getSignGrade(void) const;
	const int& getExecGrade(void) const;
	const bool& getSigned(void) const;
	void beSigned(Bureaucrat& b);
	virtual void execute(Bureaucrat const & executor) const = 0;

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

	class FormAlreadySignedException : public std::exception
	{
	public:
		virtual const char	*what() const throw();
	};

	class FormIsNotSignedException : public std::exception
	{
	public:
		virtual const char	*what() const throw();
	};

private:
	AForm();
	const std::string	name;
	bool				_signed;
	const int			signGrade;
	const int			execGrade;
};

std::ostream& operator<<(std::ostream& out, const AForm& fat);

#endif
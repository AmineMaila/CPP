#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>

class Bureaucrat;

class Form
{
public:
	~Form();
	Form(std::string name, int signGrade);
	Form(const Form& other);
	Form& operator=(const Form& other);

	const std::string& getName(void) const;
	const int& getSignGrade(void) const;
	const int& getExecGrade(void) const;
	const bool& getSigned(void) const;
	void beSigned(Bureaucrat& b);

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

private:
	Form();
	const std::string	name;
	bool				_signed;
	const int			signGrade;
	const int			execGrade;
};

std::ostream& operator<<(std::ostream& out, const Form& fat);

#endif
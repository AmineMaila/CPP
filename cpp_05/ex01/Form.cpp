#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::~Form() {}

Form::Form() : name(""), _signed(false), signGrade(42), execGrade(0) {}

Form::Form(std::string name, int signGrade) : name(name),  _signed(false), signGrade(signGrade), execGrade(0)
{
	if (this->signGrade > 150)
		throw Form::GradeTooLowException();
	if (this->signGrade < 1)
		throw Form::GradeTooHighException();
}

Form::Form(const Form& other) : name(other.name), signGrade(other.signGrade), execGrade(other.execGrade)
{
	*this = other;
}

Form& Form::operator=(const Form& other)
{
	if (this != &other)
		this->_signed = other._signed;
	return (*this);
}

const std::string& Form::getName(void) const
{
	return (this->name);
}

const int& Form::getSignGrade(void) const
{
	return (this->signGrade);
}

const bool& Form::getSigned(void) const
{
	return (this->_signed);
}

const int& Form::getExecGrade(void) const
{
	return (this->execGrade);
}

std::ostream& operator<<(std::ostream& out, const Form& c1)
{
	out << "name : " << c1.getName() << ", sign grade : " << c1.getSignGrade() << ", sign status : " << c1.getSigned() << ", exec grade : " << c1.getExecGrade();
	return (out);
}

void Form::beSigned(Bureaucrat& b)
{
	if (b.getGrade() > this->getSignGrade())
		throw Form::GradeTooLowException();
	else if (this->_signed)
		throw Form::FormAlreadySignedException();
	else
		this->_signed = true;
}

const char	*Form::GradeTooHighException::what() const throw() {return ("Grade too high");}

const char	*Form::GradeTooLowException::what() const throw() {return ("Grade too low");}

const char	*Form::FormAlreadySignedException::what() const throw() {return ("Form already signed");}
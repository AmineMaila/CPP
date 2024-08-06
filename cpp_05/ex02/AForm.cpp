#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::~AForm() {}

AForm::AForm() : name(""), _signed(false), signGrade(42), execGrade(0) {}

AForm::AForm(std::string name, int signGrade, int execGrade) : name(name),  _signed(false), signGrade(signGrade), execGrade(execGrade)
{
	if (this->signGrade > 150 || this->execGrade > 150)
		throw AForm::GradeTooLowException();
	if (this->signGrade < 1 || this->execGrade < 1)
		throw AForm::GradeTooHighException();
}

AForm::AForm(const AForm& other) : name(other.name), signGrade(other.signGrade), execGrade(other.execGrade)
{
	*this = other;
}

AForm& AForm::operator=(const AForm& other)
{
	if (this != &other)
		this->_signed = other._signed;
	return (*this);
}

const std::string& AForm::getName(void) const
{
	return (this->name);
}

const int& AForm::getSignGrade(void) const
{
	return (this->signGrade);
}

const bool& AForm::getSigned(void) const
{
	return (this->_signed);
}

const int& AForm::getExecGrade(void) const
{
	return (this->execGrade);
}

std::ostream& operator<<(std::ostream& out, const AForm& c1)
{
	out << "name : " << c1.getName() << ", sign grade : " << c1.getSignGrade() << ", sign status : " << c1.getSigned() << ", exec grade : " << c1.getExecGrade();
	return (out);
}

void AForm::beSigned(Bureaucrat& b)
{
	if (b.getGrade() > this->getSignGrade())
		throw AForm::GradeTooLowException();
	else if (this->_signed)
		throw AForm::FormAlreadySignedException();
	else
		this->_signed = true;
}

const char	*AForm::GradeTooHighException::what() const throw() {return ("Grade too high");}

const char	*AForm::GradeTooLowException::what() const throw() {return ("Grade too low");}

const char	*AForm::FormIsNotSignedException::what() const throw() {return ("Form is not signed");}

const char	*AForm::FormAlreadySignedException::what() const throw() {return ("Form already signed");}

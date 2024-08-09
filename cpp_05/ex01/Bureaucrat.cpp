#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat() : name(""), grade(150) {}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.name)
{
	*this = other;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	if (this != &other)
		this->grade = other.grade;
	return (*this);
}

void Bureaucrat::incGrade(void)
{
	this->grade--;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decGrade(void)
{
	this->grade++;
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

const std::string& Bureaucrat::getName(void) const
{
	return (this->name);
}

const int& Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& fat)
{
	out << fat.getName() << ", bureaucrat grade " << fat.getGrade();
	return (out);
}

void Bureaucrat::signForm(Form& b)
{
	try
	{
		b.beSigned(*this);
		std::cout << this->name << " signed " << b.getName() << std::endl;
	}
	catch (std::exception& err)
	{
		std::cerr << this->name << " couldn't sign " << b.getName() << " because " << err.what() << std::endl;
	}
}

const char	*Bureaucrat::GradeTooHighException::what() const throw() {return ("Grade too high");}

const char	*Bureaucrat::GradeTooLowException::what() const throw() {return ("Grade too low");}

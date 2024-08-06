#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Form f("b1", 42);
		Bureaucrat bureau1("jeff", 32);
		Bureaucrat bureau2("tim", 32);
		Bureaucrat bureau3("bob", 149);
		std::cout << bureau1 << std::endl;
		std::cout << f << std::endl;
		bureau1.signForm(f);
		bureau2.signForm(f);
		bureau3.signForm(f);
		f.beSigned(bureau1);
		f.beSigned(bureau3);
	}
	catch (Bureaucrat::GradeTooHighException& err)
	{
		std::cerr << "exception caught : " << err.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException& err)
	{
		std::cerr << "exception caught : " << err.what() << std::endl;
	}
	catch (Form::GradeTooHighException& err)
	{
		std::cerr << "exception caught : " << err.what() << std::endl;
	}
	catch (Form::GradeTooLowException& err)
	{
		std::cerr << "exception caught : " << err.what() << std::endl;
	}
}
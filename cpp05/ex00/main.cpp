#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat bureau("bob", 149);
		bureau.decGrade();
		std::cout << bureau << std::endl;
		bureau.decGrade();
	}
	catch (std::exception& err)
	{
		std::cerr << "exception caught : " << err.what() << std::endl;
	}
}
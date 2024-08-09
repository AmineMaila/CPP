#include "ScalarConverter.hpp"
#include <cctype>
#include <limits>

void	putChar(double src)
{
	std::cout << "char: ";
	if (src >= 0 && src <= 255)
	{
		if (!std::isprint(src))
	 		std::cout << "Non displayable" << std::endl;
		else
			std::cout << '\'' << static_cast<char>(src) << '\'' <<  std::endl;
	}
	else
	 	std::cout << "impossible" << std::endl;
}

void	putInt(double src)
{
	std::cout << "int: ";
	if (src >= static_cast<double>(std::numeric_limits<int>::min())
		&& src <= static_cast<double>(std::numeric_limits<int>::max()))
		std::cout << static_cast<int>(src) << std::endl;
	else
		std::cout << "impossible" << std::endl;
}

void	putFloat(double src)
{
	std::cout << "float: ";
	if (src == std::numeric_limits<double>::infinity())
		std::cout << "+inff" << std::endl;
	else if (src == -std::numeric_limits<double>::infinity())
		std::cout << "-inff" << std::endl;
	else if (src >= static_cast<double>(std::numeric_limits<float>::lowest())
		&& src <= static_cast<double>(std::numeric_limits<float>::max()))
		std::cout << std::fixed << std::setprecision(1) << static_cast<float>(src) << 'f' << std::endl;
	else
		std::cout << "impossible" << std::endl;
}

void		putDouble(double src)
{
	std::cout << "double: ";
	if (src == std::numeric_limits<double>::infinity())
		std::cout << "+";
	else if (src == -std::numeric_limits<double>::infinity())
		std::cout << "-";
	std::cout << std::fixed << std::setprecision(1) << src << std::endl;
}
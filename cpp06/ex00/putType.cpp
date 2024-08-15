#include "ScalarConverter.hpp"

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
	float	res = static_cast<float>(src);
	std::cout << "float: ";
	if (isinf(res) && !signbit(res))
		std::cout << "+";
	std::cout << std::fixed << std::setprecision(1) << res << 'f' << std::endl;;
}

void		putDouble(double src)
{
	std::cout << "double: ";
	if (isinf(src) && !signbit(src))
		std::cout << "+";
	std::cout << std::fixed << std::setprecision(1) << src << std::endl;
}
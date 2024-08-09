#include "ScalarConverter.hpp"
#include <limits>

ScalarConverter::~ScalarConverter() {}

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter& other)
{
	*this = other;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other)
{
	(void)other;
	return (*this);
}

void	ScalarConverter::convert(std::string value)
{
	const char	*val = value.c_str();
	double	res;
	char	*p = NULL;

	if (value == "+inf" || value == "+inff")
		res = std::numeric_limits<double>::infinity();
	else
	{
		if (value.length() == 1 && !std::isdigit(*val) && std::isprint(static_cast<unsigned char>(*val)))
			res = static_cast<double>(*val);
		else
			res = std::strtod(val, &p);
		if ((*p && *p != 'f') || (*p == 'f' && *(p + 1)))
			throw TypeInvalidException();
	}
	putChar(res);
	putInt(res);
	putFloat(res);
	putDouble(res);
}

const char* ScalarConverter::TypeInvalidException::what() const throw()
{
	return ("Type invalid");
}

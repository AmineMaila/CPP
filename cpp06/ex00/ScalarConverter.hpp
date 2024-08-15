#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <exception>
#include <string>
#include <iomanip>
#include <iostream>
#include <limits>

class ScalarConverter
{
public:
	static void	convert(std::string value);

	class TypeInvalidException : public std::exception
	{
	public:
		virtual const char* what() const throw() ;
	};

private:
	~ScalarConverter();
	ScalarConverter();
	ScalarConverter(const ScalarConverter& other);
	ScalarConverter& operator=(const ScalarConverter& other);

};

void		putDouble(double src);
void		putFloat(double src);
void		putInt(double src);
void		putChar(double src);

#endif
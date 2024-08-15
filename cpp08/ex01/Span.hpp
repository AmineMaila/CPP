#ifndef SPAN_HPP
# define SPAN_HPP

#include <exception>
#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
public:
	~Span();
	Span(unsigned int N);
	Span(const Span& other);
	Span& operator=(const Span& other);

	void	addNumber(int num);
	void	addNumbers(std::vector<int>::iterator first, std::vector<int>::iterator last);
	int		shortestSpan( void );
	int		longestSpan( void );

	class ContainerFullException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};

	class NotEnoughElementsException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};

private:
	Span();
	unsigned int		size;
	std::vector<int>	nums;
};

#endif
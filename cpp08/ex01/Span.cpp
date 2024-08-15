#include "Span.hpp"
#include <algorithm>
#include <iterator>
#include <vector>

Span::~Span() {}

Span::Span(unsigned int N) : size(N) {}

Span::Span(const Span& other)
{
	*this = other;
}

Span& Span::operator=(const Span& other)
{
	if (this != &other)
	{
		size = other.size;
		nums = other.nums;
	}
	return (*this);
}

void Span::addNumber(int num)
{
	if (nums.size() < size)
		nums.push_back(num);
	else
	 	throw Span::ContainerFullException();
}

void Span::addNumbers(std::vector<int>::iterator first, std::vector<int>::iterator last)
{
	if (static_cast<unsigned int>(last - first) + nums.size() <= size)
		nums.insert(nums.end(), first, last);
	else
	 	throw Span::ContainerFullException();
}

int	Span::shortestSpan( void )
{
	if (size < 2)
		throw NotEnoughElementsException();
	std::vector<int> copy = nums;
	std::sort(copy.begin(), copy.end());

	int _short = copy[1] - copy[0];

	std::vector<int>::iterator it;

	for (it = copy.begin() + 1 ; it != copy.end() - 1; it++)
	{
		if (*(it + 1) - *it < _short)
			_short = *(it + 1) - *it;
	}
	return (_short);
}

int	Span::longestSpan( void )
{
	if (size < 2)
		throw NotEnoughElementsException();
	return (*std::max_element(nums.begin(), nums.end()) - *std::min_element(nums.begin(), nums.end()));
}

const char *Span::ContainerFullException::what() const throw() {return ("no space left");}

const char *Span::NotEnoughElementsException::what() const throw() {return ("not enough elements");}
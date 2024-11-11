#include "RPN.hpp"

RPN::~RPN() {}

RPN::RPN() {}

RPN::RPN(const RPN& other)
{
	*this = other;
}
	
RPN&	RPN::operator=(const RPN& other)
{
	if (this != &other)
	{
		this->rpn = other.rpn;
	}
	return (*this);
}

bool	RPN::isop(char c)
{
	if (c != '/' && c != '*'
		&& c != '+' && c != '-')
		return (false);
	return (true);
}

int	RPN::doop(int lhs, int rhs, char c)
{
	if (c == '-')
		return (lhs - rhs);
	else if (c == '+')
		return (lhs + rhs);
	else if (c == '*')
		return (lhs * rhs);
	else
		return (lhs / rhs);
}

void	RPN::calculate(std::string input)
{
	int lhs;
	int rhs;

	for (unsigned int i = 0; i < input.length(); i++)
	{
		if (std::isdigit(input[i]))
			rpn.push(input[i] - '0');
		else if (isop(input[i]))
		{
			if (rpn.size() < 2)
				throw(RPN::ErrorException());
			rhs = rpn.top();
			rpn.pop();
			lhs = rpn.top();
			rpn.pop();
			rpn.push(doop(lhs, rhs, input[i]));
		}
		else if (input[i] != ' ')
			throw (RPN::ErrorException());
	}
	if (rpn.size() != 1)
		throw (RPN::ErrorException());
	std::cout << rpn.top() << std::endl;
}

const char *RPN::ErrorException::what() const throw() {return ("Error");}
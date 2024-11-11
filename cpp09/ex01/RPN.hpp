#ifndef RPN_HPP
# define RPN_HPP

#include <stack>
#include <iostream>

class RPN
{
public:
	~RPN();
	RPN();
	RPN(const RPN& other);
	RPN& operator=(const RPN& other);

	bool	isop(char c);
	int		doop(int lhs, int rhs, char c);
	void	calculate(std::string input);

	class ErrorException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};

private:
	std::stack<int>	rpn;
};

#endif
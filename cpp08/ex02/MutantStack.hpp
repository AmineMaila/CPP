#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <vector>
#include <iostream>

template<typename T>
class MutantStack : public std::stack<T>
{
public:
	~MutantStack() {}

	MutantStack() {}

	MutantStack(const MutantStack<T>& other)
	{
		*this = other;
	}

	MutantStack& operator=(const MutantStack<T>& other)
	{
		if (this != &other)
			std::stack<T>::operator=(other);
		return (*this);
	}

	typedef typename std::deque<T>::iterator iterator;

	iterator	begin( void )
	{
		return (this->c.begin());
	}

	iterator	end( void )
	{
		return (this->c.end());
	}
};

#endif
#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template<typename T>
int	easyfind(T a, int b)
{
	if (std::find(a.begin(), a.end(), b) != a.end())
		return (true);
	else
		return (false);
}

#endif
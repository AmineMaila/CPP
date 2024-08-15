#ifndef ITER_HPP
# define ITER_HPP

#include <cstddef>
#include <iostream>

template<typename T, typename T1>
void	iter(T *a, size_t len, void (*func)(T1&))
{
	size_t i = 0;
	while (i < len)
		func(a[i++]);
}

template<typename T>
void	printElem(T& a)
{
	std::cout << a;
}

#endif
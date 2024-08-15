#ifndef ITER_HPP
# define ITER_HPP

#include <cstddef>
#include <exception>
#include <iostream>

template<typename T>
class Array
{
public:
	~Array() { delete[] this->arr; }

	Array() : elements(0), arr( new T[0] ) {}

	Array(unsigned int n)
	{
		this->arr = new T[n];
		this->elements = n;
	}

	Array	operator=(const Array& other)
	{
		if (this != &other)
		{
			delete[] this->arr;
			this->arr = new T[other.elements];
			for (unsigned int i = 0; i < other.elements; i++)
				this->arr[i] = other.arr[i];
			this->elements = other.elements;
		}
		return (*this);
	}
	
	Array(const Array& other)
	{
		this->arr = new T[other.elements];
		for (unsigned int i = 0; i < other.elements; i++)
			this->arr[i] = other.arr[i];
		this->elements = other.elements;
	}

	T&	operator[](unsigned int i) const
	{
		if (i >= this->elements)
			throw Array<T>::OutOfBoundsException();
		return (arr[i]);
	}

	unsigned int size( void ) const
	{
		return (elements);
	}

	class OutOfBoundsException : public std::exception
	{
		virtual const char *what() const throw() {return ("index out of bounds");}
	};

private:
	unsigned int	elements;
	T				*arr;
};


#endif
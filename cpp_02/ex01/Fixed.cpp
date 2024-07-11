/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 20:21:55 by mmaila            #+#    #+#             */
/*   Updated: 2024/06/06 15:56:57 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	val = 0;
}

Fixed& Fixed::operator=(const Fixed& obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &obj)
		this->val = obj.val;
	return (*this);
}

Fixed::Fixed(const Fixed& obj)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed::Fixed(const int i)
{
	std::cout << "int constructor called" << std::endl;
	val = i << bits;
}

Fixed::Fixed(const float f)
{
	std::cout << "float constructor called" << std::endl;
	this->val = std::roundf(f * (1 << bits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat( void ) const
{
	return ((float)(val) / (1 << bits));
}

int Fixed::toInt( void ) const
{
	return (val >> bits);
}

int Fixed::getRawBits( void ) const
{
	return (val);
}

void Fixed::setRawBits( int const raw )
{
	val = raw;
}

std::ostream& operator<<(std::ostream& out, const Fixed& obj)
{
	out << obj.toFloat();
	return (out);
} 

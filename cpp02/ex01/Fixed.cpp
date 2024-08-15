/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 09:19:22 by mmaila            #+#    #+#             */
/*   Updated: 2024/07/15 17:00:04 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::~Fixed() {std::cout << "Destructor called" << std::endl;}

Fixed::Fixed() : value(0) {std::cout << "Default constructor called" << std::endl;}

Fixed::Fixed(const int nbr)
{
	std::cout << "int constructor called" << std::endl;
	this->value = nbr << this->bits;
}

Fixed::Fixed(const float nbr)
{
	std::cout << "float constructor called" << std::endl;
	this->value = std::roundf(nbr * (1 << this->bits));
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->value = fixed.getRawBits();
	return (*this);
}

Fixed::Fixed(const Fixed& fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

int Fixed::getRawBits( void ) const
{
	return (this->value);
}

float Fixed::toFloat( void ) const
{
	return ((float)(this->value) / (1 << this->bits));
}

int Fixed::toInt( void ) const
{
	return (this->value >> this->bits);
}

std::ostream& operator<<(std::ostream& out, const Fixed& obj)
{
	out << obj.toFloat();
	return (out);
}

void Fixed::setRawBits( int const raw )
{
	value = raw;
}

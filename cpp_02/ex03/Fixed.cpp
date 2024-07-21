/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 09:19:22 by mmaila            #+#    #+#             */
/*   Updated: 2024/07/21 12:24:49 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::~Fixed() {}

Fixed::Fixed() : value(0) {}

Fixed::Fixed(const int nbr)
{
	this->value = nbr << this->bits;
}

Fixed::Fixed(const float nbr)
{
	this->value = std::roundf(nbr * (1 << this->bits));
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
	this->value = fixed.getRawBits();
	return (*this);
}

Fixed::Fixed(const Fixed& fixed)
{
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

Fixed& Fixed::operator++( void )
{
	*this = Fixed(this->toFloat() + 0.00390625f);
	return (*this);
}

Fixed Fixed::operator++( int )
{
	Fixed tmp = *this;
	
	*this = Fixed(this->toFloat() + 0.00390625f);
	return (tmp);
}

Fixed& Fixed::operator--( void )
{
	*this = Fixed(this->toFloat() - 0.00390625f);
	return (*this);
}

Fixed Fixed::operator--( int )
{
	Fixed tmp = *this;
	
	*this = Fixed(this->toFloat() - 0.00390625f);
	return (tmp);
}

Fixed Fixed::operator+( const Fixed& fixed ) const
{
	return (Fixed(this->toFloat() + fixed.toFloat()));
}

Fixed Fixed::operator-( const Fixed& fixed ) const
{
	return (Fixed(this->toFloat() - fixed.toFloat()));
}

Fixed Fixed::operator*( const Fixed& fixed ) const
{
	return (Fixed(this->toFloat() * fixed.toFloat()));
}

Fixed Fixed::operator/( const Fixed& fixed ) const
{
	return (Fixed(this->toFloat() / fixed.toFloat()));
}

bool Fixed::operator==( const Fixed& fixed ) const
{
	if (this->toFloat() == fixed.toFloat())
		return (true);
	return (false);
}

bool Fixed::operator!=( const Fixed& fixed ) const
{
	if (this->toFloat() != fixed.toFloat())
		return (true);
	return (false);
}

bool Fixed::operator>=( const Fixed& fixed ) const
{
	if (this->toFloat() >= fixed.toFloat())
		return (true);
	return (false);
}

bool Fixed::operator<=( const Fixed& fixed ) const
{
	if (this->toFloat() <= fixed.toFloat())
		return (true);
	return (false);
}

bool Fixed::operator<( const Fixed& fixed ) const
{
	if (this->toFloat() < fixed.toFloat())
		return (true);
	return (false);
}

bool Fixed::operator>( const Fixed& fixed ) const
{
	if (this->toFloat() > fixed.toFloat())
		return (true);
	return (false);
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	return (a < b ? a : b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	return (a < b ? a : b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	return (a > b ? a : b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	return (a > b ? a : b);
}

void Fixed::setRawBits( int const raw )
{
	value = raw;
}

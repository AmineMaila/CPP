/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 08:52:06 by mmaila            #+#    #+#             */
/*   Updated: 2024/07/21 12:24:32 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
public :
	Fixed();
	Fixed(const int nbr);
	Fixed(const float nbr);
	Fixed(const Fixed& fixed);
	
	Fixed& operator=(const Fixed& fixed);

	bool operator<(const Fixed& fixed) const;
	bool operator>(const Fixed& fixed) const;
	bool operator<=(const Fixed& fixed) const;
	bool operator>=(const Fixed& fixed) const;
	bool operator==(const Fixed& fixed) const;
	bool operator!=(const Fixed& fixed) const;
	Fixed operator+(const Fixed& fixed) const;
	Fixed operator-(const Fixed& fixed) const;
	Fixed operator/(const Fixed& fixed) const;
	Fixed operator*(const Fixed& fixed) const;
	Fixed& operator++( void );
	Fixed  operator++( int );
	Fixed& operator--( void );
	Fixed  operator--( int );
	static Fixed& min(Fixed& a, Fixed& b);
	static const Fixed& min(const Fixed& a, const Fixed& b);
	static Fixed& max(Fixed& a, Fixed& b);
	static const Fixed& max(const Fixed& a, const Fixed& b);
	
	~Fixed();
	
	float toFloat( void ) const;
	int toInt( void ) const;
	int	getRawBits( void ) const;
	void setRawBits( int const raw );

private :
	int					value;
	static const int	bits = 8;

};

std::ostream& operator<<(std::ostream& out, const Fixed& obj);

#endif
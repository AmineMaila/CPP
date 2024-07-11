/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 20:21:59 by mmaila            #+#    #+#             */
/*   Updated: 2024/06/06 14:15:35 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
public :
	Fixed();
	Fixed(const Fixed& obj);
	Fixed(const int i);
	Fixed(const float f);
	Fixed& operator=(const Fixed& obj);
	~Fixed();
	int		getRawBits() const;
	void	setRawBits(int const raw);
	float	toFloat( void ) const;
	int		toInt( void ) const;
private :
	int	val;
	static const int bits = 8;
	
};

std::ostream& operator<<(std::ostream& out, const Fixed& obj);

#endif
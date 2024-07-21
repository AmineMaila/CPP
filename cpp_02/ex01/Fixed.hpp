/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 08:52:06 by mmaila            #+#    #+#             */
/*   Updated: 2024/07/20 18:32:46 by mmaila           ###   ########.fr       */
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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 20:21:59 by mmaila            #+#    #+#             */
/*   Updated: 2024/06/04 18:51:26 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
public :
	Fixed();
	Fixed(Fixed& obj);
	Fixed& operator=(Fixed& obj);
	~Fixed();
	int		getRawBits();
	void	setRawBits(int const raw);
private :
	int	val;
	static const int bits = 8;
};

#endif
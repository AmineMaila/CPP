/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 16:22:59 by mmaila            #+#    #+#             */
/*   Updated: 2024/07/23 17:13:19 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::~WrongCat(){std::cout << "WrongCat destructed." << std::endl;}

WrongCat::WrongCat()
{
	std::cout << "WrongCat constructed." << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& wildWrongCat)
{
	std::cout << "WrongCat copy constructed." << std::endl;
	*this = wildWrongCat;
}

WrongCat& WrongCat::operator=(const WrongCat& wildWrongCat)
{
	if (this != &wildWrongCat)
		this->type = wildWrongCat.type;
	return (*this);
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "Wrong Meow!" << std::endl;
}

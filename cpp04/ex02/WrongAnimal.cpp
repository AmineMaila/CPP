/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 16:22:59 by mmaila            #+#    #+#             */
/*   Updated: 2024/07/23 17:12:43 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::~WrongAnimal(){std::cout << "WrongAnimal destructed." << std::endl;}

WrongAnimal::WrongAnimal() {std::cout << "WrongAnimal constructed." << std::endl;}

WrongAnimal::WrongAnimal(const WrongAnimal& wildWrongAnimal)
{
	std::cout << "WrongAnimal copy constructed." << std::endl;
	*this = wildWrongAnimal;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& wildWrongAnimal)
{
	(void)wildWrongAnimal;
	return (*this);
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "* Generic Wrong Animal sound *" << std::endl;
}

const std::string&	WrongAnimal::getType( void ) const
{
	return (this->type);
}

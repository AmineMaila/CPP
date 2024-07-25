/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 16:22:59 by mmaila            #+#    #+#             */
/*   Updated: 2024/07/23 17:11:49 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::~Cat(){std::cout << "Cat destructed." << std::endl;}

Cat::Cat()
{
	std::cout << "Cat constructed." << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat& wildCat)
{
	std::cout << "Animal copy constructed." << std::endl;
	*this = wildCat;
}

Cat& Cat::operator=(const Cat& wildCat)
{
	if (this != &wildCat)
		this->type = wildCat.type;
	return (*this);
}

void	Cat::makeSound( void ) const
{
	std::cout << "Meow!" << std::endl;
}

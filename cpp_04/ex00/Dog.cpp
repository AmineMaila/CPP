/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 16:22:59 by mmaila            #+#    #+#             */
/*   Updated: 2024/07/23 17:09:44 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::~Dog(){std::cout << "Dog destructed." << std::endl;}

Dog::Dog()
{
	std::cout << "Dog constructed." << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog& wildDog)
{
	std::cout << "Dog copy constructed." << std::endl;
	*this = wildDog;
}

Dog& Dog::operator=(const Dog& wildDog)
{
	if (this != &wildDog)
		this->type = wildDog.type;
	return (*this);
}

void	Dog::makeSound( void ) const
{
	std::cout << "Bark!" << std::endl;
}

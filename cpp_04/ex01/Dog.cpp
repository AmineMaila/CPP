/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 16:22:59 by mmaila            #+#    #+#             */
/*   Updated: 2024/07/24 10:31:26 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::~Dog()
{
	std::cout << "Dog destructed." << std::endl;
	delete this->brain;
}

Dog::Dog()
{
	std::cout << "Dog constructed." << std::endl;
	this->brain = new Brain;
	this->type = "Dog";
}

Dog::Dog(const Dog& wildDog)
{
	std::cout << "Animal copy constructed." << std::endl;
	this->brain = new Brain;
	for (int i = 0; i < 100; i++)
		this->brain->ideas[i] = wildDog.brain->ideas[i];
}

Dog& Dog::operator=(const Dog& wildDog)
{
	if (this != &wildDog)
	{
		this->type = wildDog.type;
		delete this->brain;
		this->brain = new Brain;
		for (int i = 0; i < 100; i++)
			this->brain->ideas[i] = wildDog.brain->ideas[i];
	}
	return (*this);
}

void	Dog::makeSound( void ) const
{
	std::cout << "Bark!" << std::endl;
}

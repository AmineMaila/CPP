/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 16:22:59 by mmaila            #+#    #+#             */
/*   Updated: 2024/07/24 11:23:45 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::~Cat()
{
	std::cout << "Cat destructed." << std::endl;
	delete this->brain;
}

Cat::Cat()
{
	std::cout << "Cat constructed." << std::endl;
	this->brain = new Brain;
	this->type = "Cat";
}

Cat::Cat(const Cat& wildCat)
{
	std::cout << "Animal copy constructed." << std::endl;
	this->brain = new Brain;
	for (int i = 0; i < 100; i++)
		this->brain->ideas[i] = wildCat.brain->ideas[i];
}

Cat& Cat::operator=(const Cat& wildCat)
{
	if (this != &wildCat)
	{
		this->type = wildCat.type;
		delete this->brain;
		this->brain = new Brain;
		for (int i = 0; i < 100; i++)
			this->brain->ideas[i] = wildCat.brain->ideas[i];
	}
	return (*this);
}

void	Cat::makeSound( void ) const
{
	std::cout << "Meow!" << std::endl;
}

const Brain* Cat::getBrain( void ) const
{
	return (this->brain);
}

void Cat::setBrain( std::string idea )
{
	for (int i = 0; i < 100; i++)
		this->brain->ideas[i] = idea;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 16:22:59 by mmaila            #+#    #+#             */
/*   Updated: 2024/07/23 16:44:27 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::~Animal(){std::cout << "Animal destructed." << std::endl;}

Animal::Animal() {std::cout << "Animal constructed." << std::endl;}

Animal::Animal(const Animal& wild)
{
	std::cout << "Animal copy constructed." << std::endl;
	*this = wild;
}

Animal& Animal::operator=(const Animal& wild)
{
	(void)wild;
	return (*this);
}

void	Animal::makeSound( void ) const
{
	std::cout << "* Generic Animal sound *" << std::endl;
}

const std::string&	Animal::getType( void ) const
{
	return (this->type);
}

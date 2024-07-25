/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 13:33:55 by mmaila            #+#    #+#             */
/*   Updated: 2024/07/24 18:53:01 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::~Ice() {}

Ice::Ice()
{
	this->type = "ice";
}

Ice::Ice(const Ice& ice)
{
	(void)ice;
}

Ice& Ice::operator=(const Ice& ice)
{
	(void)ice;
	return (*this);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria* Ice::clone() const
{
	return (new Ice);
}

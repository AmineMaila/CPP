/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 13:03:06 by mmaila            #+#    #+#             */
/*   Updated: 2024/07/24 18:51:33 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::~AMateria() {}

AMateria::AMateria() {}

AMateria::AMateria(std::string const & type)
{
	this->type = type;
}

AMateria::AMateria(const AMateria& other)
{
	*this = other;
}

AMateria& AMateria::operator=(const AMateria& other)
{
	if (this != &other)
		this->type = other.type;
	return(*this);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "* shoots generic spell at " << target.getName() << " *" << std::endl;
}

std::string const & AMateria::getType() const
{
	return (this->type);
}

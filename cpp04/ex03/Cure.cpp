/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 13:36:26 by mmaila            #+#    #+#             */
/*   Updated: 2024/07/24 18:52:53 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::~Cure() {}

Cure::Cure()
{
	this->type = "cure";
}

Cure::Cure(const Cure& cure)
{
	(void)cure;
}

Cure& Cure::operator=(const Cure& cure)
{
	(void)cure;
	return (*this);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

AMateria* Cure::clone() const
{
	return (new Cure);
}

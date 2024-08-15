/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 20:11:33 by mmaila            #+#    #+#             */
/*   Updated: 2024/07/14 17:15:32 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string newName) : name(newName), weapon(NULL) {}

HumanB::~HumanB() {}

void	HumanB::setWeapon(Weapon& equipment)
{
	weapon = &equipment;
}

void	HumanB::attack(void)
{
	if (weapon)
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << name << " doesn't have a weapon" << std::endl;
}

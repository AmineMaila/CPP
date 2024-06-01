/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 20:11:33 by mmaila            #+#    #+#             */
/*   Updated: 2024/06/01 14:42:47 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::setWeapon(Weapon equipment)
{
	weapon = equipment;
}

void	HumanB::attack(void)
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}

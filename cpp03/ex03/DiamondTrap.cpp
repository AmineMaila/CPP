/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 11:15:18 by mmaila            #+#    #+#             */
/*   Updated: 2024/07/23 11:00:35 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::~DiamondTrap(){std::cout << "DiamondTrap " << name << " destructed." << std::endl;}

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap constructed." << std::endl;
	this->EP = 50;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
	std::cout << "DiamondTrap " << name << " constructed." << std::endl;
	this->name = name;
	this->EP = 50;
}

DiamondTrap::DiamondTrap(const DiamondTrap& robot) : ClapTrap(robot.name + "_clap_name")
{
	std::cout << "DiamondTrap copy constructed." << std::endl;
	*this = robot;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& robot)
{
	if (this != &robot)
	{
		this->name = robot.name;
		ClapTrap::name = robot.name + "_clap_name";
		this->HP = robot.HP;
		this->EP = robot.EP;
		this->AD = robot.AD;
	}
	return (*this);
}


void DiamondTrap::whoAmI()
{
	std::cout << this->name << std::endl;
	std::cout << ClapTrap::name << std::endl;
}

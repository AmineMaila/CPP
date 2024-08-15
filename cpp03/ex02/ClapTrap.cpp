/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 16:22:59 by mmaila            #+#    #+#             */
/*   Updated: 2024/07/22 19:46:07 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::~ClapTrap(){std::cout << "ClapTrap " << this->name << " destructed." << std::endl;}

ClapTrap::ClapTrap() : HP(10), EP(10), AD(0) {std::cout << "ClapTrap constructed." << std::endl;}

ClapTrap::ClapTrap(std::string name) : name(name), HP(10), EP(10), AD(0) {std::cout << "ClapTrap " << this->name << " constructed." << std::endl;}

ClapTrap::ClapTrap(const ClapTrap& robot)
{
	std::cout << "ClapTrap copy constructed." << std::endl;
	*this = robot;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& robot)
{
	if (this != &robot)
	{
		this->name = robot.name;
		this->HP = robot.HP;
		this->EP = robot.EP;
		this->AD = robot.AD;
	}
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (EP && HP)
	{
		EP--;
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->AD << " points of damage!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->name << " Cannot perform action!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > this->HP)
		this->HP = 0;
	else
	{
		std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage!" << std::endl;
		this->HP -= amount;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (EP && HP)
	{
		EP--;
		std::cout << "ClapTrap " << this->name << " repairs itself and gained " << amount << " hit points back!" << std::endl;
		HP += amount;
	}
	else
		std::cout << "ClapTrap " << this->name << " Cannot perform action!" << std::endl;
}

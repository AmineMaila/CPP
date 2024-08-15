/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 19:02:57 by mmaila            #+#    #+#             */
/*   Updated: 2024/07/23 11:01:59 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::~ScavTrap(){std::cout << "ScavTrap " << this->name << " destructed." << std::endl;}

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap constructed." << std::endl;
	this->HP = 100;
	this->EP = 50;
	this->AD = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap " << name << " constructed." << std::endl;
	this->name = name;
	this->HP = 100;
	this->EP = 50;
	this->AD = 20;
}

ScavTrap::ScavTrap(const ScavTrap& robot) : ClapTrap(robot.name)
{
	std::cout << "ScavTrap copy constructed." << std::endl;
	*this = robot;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& robot)
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

void ScavTrap::attack(const std::string& target)
{
	if (EP && HP)
	{
		EP--;
		std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->AD << " points of damage!" << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->name << " Cannot perform action!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name << " is in Gate Keeper mode!" << std::endl;
}
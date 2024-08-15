/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 10:33:36 by mmaila            #+#    #+#             */
/*   Updated: 2024/07/23 11:02:10 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::~FragTrap(){std::cout << "FragTrap " << name << " destructed." << std::endl;}

FragTrap::FragTrap()
{
	std::cout << "FragTrap constructed." << std::endl;
	this->HP = 100;
	this->EP = 100;
	this->AD = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap " << name << " constructed." << std::endl;
	this->name = name;
	this->HP = 100;
	this->EP = 100;
	this->AD = 30;
}

FragTrap::FragTrap(const FragTrap& robot) : ClapTrap(robot.name)
{
	std::cout << "FragTrap copy constructed." << std::endl;
	*this = robot;
}

FragTrap& FragTrap::operator=(const FragTrap& robot)
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

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->name << " High Fives you!" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 15:11:26 by mmaila            #+#    #+#             */
/*   Updated: 2024/07/25 10:44:36 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::~Character()
{
	emptyGarbage();
	for (int i = 0; i < 4; i++)
		if (this->slots[i])
			delete slots[i];
}

Character::Character()
{
	for (int i = 0; i < 4; i++)
		slots[i] = NULL;
}

Character::Character(std::string name)
{
	this->name = name;
	for (int i = 0; i < 4; i++)
		slots[i] = NULL;
}

Character::Character(const Character& character)
{
	*this = character;
}

Character& Character::operator=(const Character& character)
{
	if (this != &character)
	{
		this->name = character.name;
		for (int i = 0; i < 4; i++)
			if (this->slots[i])
				delete slots[i];
		for (int i = 0; i < 4; i++)
			if (character.slots[i])
				this->slots[i] = character.slots[i]->clone();
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return (this->name);
}

void Character::use(int idx, ICharacter& target)
{
	if (slots[idx])
		this->slots[idx]->use(target);
}

void Character::equip(AMateria* m)
{
	int i = 0;
	while (i < 4 && slots[i])
		i++;
	if (i < 4)
		slots[i] = m;
}

void Character::emptyGarbage()
{
	for (int i = 0; i < 100; i++)
	{
		if (this->garbage[i])
		{
			delete this->garbage[i];
			this->garbage[i] = NULL;
		}
	}
}

void Character::unequip(int idx)
{
	if (!this->slots[idx])
		return ;
	int i = 0;
	while (i < 100 && this->garbage[i])
		i++;
	if (i < 100)
		this->garbage[i] = this->slots[idx];
	else
	{
		emptyGarbage();
		this->garbage[0] = this->slots[idx];
	}
	this->slots[idx] = NULL;
}

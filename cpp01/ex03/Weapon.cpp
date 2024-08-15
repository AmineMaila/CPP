/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 14:36:43 by mmaila            #+#    #+#             */
/*   Updated: 2024/07/12 10:47:04 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weapon) : type(weapon) {}

Weapon::~Weapon() {}

const	std::string& Weapon::getType()
{
	return (type);
}

void	Weapon::setType(std::string newType)
{
	type = newType;
}

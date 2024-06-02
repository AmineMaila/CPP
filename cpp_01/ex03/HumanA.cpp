/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 20:11:37 by mmaila            #+#    #+#             */
/*   Updated: 2024/05/31 20:26:32 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void	HumanA::attack(void)
{
	if (!weapon.getType().empty())
		std::cout << name << " attacks with their " << weapon.getType() << std::endl;
	else
		std::cout << name << " doesn't have a weapon" << std::endl;
}
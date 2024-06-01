/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 16:19:39 by mmaila            #+#    #+#             */
/*   Updated: 2024/05/31 16:37:23 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::~Zombie()
{
	std::cout << name << " perished." << std::endl;
}

void	Zombie::call(std::string z)
{
	name = z;
}

void	Zombie::anounce(void)
{
	std::cout << name << " :  BraiiiiiiinnnzzzZ..." << std::endl;
}
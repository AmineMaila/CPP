/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 16:06:27 by mmaila            #+#    #+#             */
/*   Updated: 2024/07/14 16:17:25 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	try
	{
		Zombie *zombie = zombieHorde(3, "ZOMBS");
		for (int i = 0; i < 3; i++)
			zombie[i].anounce();
		delete[] zombie;
	}
	catch (std::bad_alloc& e)
	{
		std::cerr << "Error : allocation failed" << std::endl;
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 16:06:27 by mmaila            #+#    #+#             */
/*   Updated: 2024/05/31 18:28:48 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int n = 8;
	Zombie *zombie = zombieHorde(n, "ZOMBS");
	for (int i = 0; i < n; i++)
		zombie[i].anounce();
	delete[] zombie;
}
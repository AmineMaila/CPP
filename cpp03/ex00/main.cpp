/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 16:22:56 by mmaila            #+#    #+#             */
/*   Updated: 2024/07/23 11:05:10 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap robot("Dave");
	
	robot.attack("Timmy");
	robot.takeDamage(5);
	robot.beRepaired(10);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 15:26:03 by mmaila            #+#    #+#             */
/*   Updated: 2024/06/03 17:55:51 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char *av[])
{
	std::string line;
	Harl        harl2;

	if (ac != 2)
	{
		std::cout << "invalid arguments" << std::endl;
		return (1);
	}
	harl2.complain(av[1]);
}
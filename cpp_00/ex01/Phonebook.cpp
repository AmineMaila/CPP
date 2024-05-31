/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 16:41:25 by mmaila            #+#    #+#             */
/*   Updated: 2024/05/31 15:51:13 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void	PhoneBook::addContact()
{
	users[index++].setContact();
	if (index == 8)
		index = 0;
}

void	PhoneBook::searchContact()
{
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|----------| Telephone Directory |----------|" << std::endl;
	for (int i = 0; i < 8 && users[i].full == true; i++)
	{
		std::cout << '|';
		std::cout << std::setw(10) << i;
		users[i].printContact();
	}
	std::cout << "|-------------------------------------------|" << std::endl;
	int	index;

	while (true)
	{
		std::cout << "Display info for index : ";
		std::cin >> index;
		if (std::cin.eof())
			exit(1);
		if (std::cin.good() && index >= 0 && index <= 7 && users[index].full)
		{
			users[index].displayInfo(index);
			break;
		}
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "invalid index!" << std::endl;
	}
}

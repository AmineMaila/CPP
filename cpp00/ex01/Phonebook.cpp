/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 16:41:25 by mmaila            #+#    #+#             */
/*   Updated: 2024/07/10 20:47:27 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

PhoneBook::PhoneBook() : index(0) {}

bool	is_digit(std::string& str)
{
	for (size_t i = 0; i < str.length(); i++)
		if (str[i] < '0' || str[i] > '9')
			return (false);
	return (true);
}

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

	std::string	input;
	int			index;

	while (true)
	{
		std::cout << "Display info for index : ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			exit(0);
		if (is_digit(input))
		{
			const char *cinput = input.c_str();
			index = std::atoi(cinput);
			if (index >= 0 && index <= 7 && users[index].full)
			{
				users[index].displayInfo(index);
				break;
			}
		}
		std::cout << "invalid index!" << std::endl;
	}
}

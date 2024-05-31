/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:02:15 by mmaila            #+#    #+#             */
/*   Updated: 2024/05/31 15:51:04 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main()
{
	PhoneBook	Directory;
	std::string	input;

	while (true)
	{
		std::cout << "-----------------------------------" << std::endl;
		std::cout << "|   ADD   |   SEARCH   |   EXIT   |" << std::endl;
		std::cout << "-----------------------------------" << std::endl;
		std::cout << "> ";
		std::cin >> input;
		if (std::cin.eof())
			break ;
		if (!input.compare("ADD"))
			Directory.addContact();
		else if (!input.compare("SEARCH"))
			Directory.searchContact();
		else if (!input.compare("EXIT"))
			exit(0);
		else
			std::cout << "invalid command!" << std::endl;
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 15:34:47 by mmaila            #+#    #+#             */
/*   Updated: 2024/03/06 17:44:25 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "book.hpp"

int main()
{
	std::string	input;
	PhoneBook	directory;

	while (1)
	{
		std::cout << "-----------------------------------" << std::endl;
		std::cout << "|   ADD   |   SEARCH   |   EXIT   |" << std::endl;
		std::cout << "-----------------------------------" << std::endl;
		std::cout << "> ";
		std::cin >> input;
		if (input == "ADD")
			directory.addContact();
		else if (input == "SEARCH")
			directory.searchContacts();
		else if (input == "EXIT")
			break ;
	}
}

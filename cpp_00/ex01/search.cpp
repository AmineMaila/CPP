/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 16:41:25 by mmaila            #+#    #+#             */
/*   Updated: 2024/05/29 17:18:54 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	printInfo(std::string& info)
{
	std::cout << '|';
	if (info.length() > 9)
		std::cout << std::setw(9) << info.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << info;
}

void	Contact::printContact()
{
	printInfo(firstName);
	printInfo(lastName);
	printInfo(nickName);
	std::cout << '|' << std::endl;
}

void	Contact::displayInfo(int index)
{
	std::cout << "-----------------CONTACT #" << index << "-----------------" <<std::endl;
	std::cout << "First name           : " << firstName << std::endl;
	std::cout << "Last name            : " << lastName << std::endl;
	std::cout << "Nickname             : " << nickName << std::endl;
	std::cout << "Phone number         : " << phoneNumber << std::endl;
	std::cout << "Darkest secret       : " << darkestSecret << std::endl;
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

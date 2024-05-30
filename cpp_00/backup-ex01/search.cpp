/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 17:41:34 by mmaila            #+#    #+#             */
/*   Updated: 2024/05/29 16:30:17 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "book.hpp"

void	printinfo(std::string& info)
{
	int	len = info.length();
	
	std::cout << '|';
	if ((len > 9)) {
		std::cout << std::setw(9) << info.substr(0, 9);
		std::cout << '.';
	} else
		std::cout << std::setw(10) << info.substr(0, 10);
}

void	Contact::printContact()
{
	printinfo(first_name);
	printinfo(last_name);
	printinfo(nickname);
	std::cout << "|" << std::endl;
}

void	Contact::displayInfo(int index)
{
	std::cout << "------------CONTACT#" << index << "------------" <<std::endl;
	std::cout << "First name     : " << first_name << std::endl;
	std::cout << "Last name      : " << last_name << std::endl;
	std::cout << "Nickname       : " << nickname << std::endl;
	std::cout << "Phone number   : " << phone_number << std::endl;
	std::cout << "Darkest secret : " << darkest_secret << std::endl;
}

void PhoneBook::searchContacts()
{
	int	i = 0;
	int	index;
	
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|----------| Telephone Directory |----------|" << std::endl;
	while (i < 8 && contacts[i].full == true)
	{
		std::cout << '|';
		std::cout << std::setw(10) << i;
		contacts[i].printContact();
		i++;
	}
	std::cout << "|-------------------------------------------|" << std::endl;
	while (1)
	{
		std::cout << "Display info for index : " << std::flush;
		std::cin >> index;
		if (std::cin.good() && (index >= 0 && index <= 7) && contacts[index].full == true)
		{
			contacts[index].displayInfo(index);
			break ;
		}
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
		std::cout << "Invalid entry, try again" << std::endl;
	}
}

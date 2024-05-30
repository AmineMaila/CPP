/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 19:23:34 by mmaila            #+#    #+#             */
/*   Updated: 2024/05/29 17:08:55 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

std::string	get_input(std::string msg)
{
	std::string	input;

	std::cout << msg;
	std::cin >> input;
	return (input);
}

void	Contact::setContact()
{
	firstName = get_input("First name     : ");
	lastName = get_input("Last name      : ");
	nickName = get_input("Nickname       : ");
	phoneNumber = get_input("Phone number   : ");
	darkestSecret = get_input("Darkest secret : ");
	full = true;
}

void	PhoneBook::addContact()
{
	users[index++].setContact();
	if (index == 8)
		index = 0;
}

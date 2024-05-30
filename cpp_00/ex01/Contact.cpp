/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 19:23:34 by mmaila            #+#    #+#             */
/*   Updated: 2024/05/30 22:10:25 by mmaila           ###   ########.fr       */
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

void	printInfo(std::string& info)
{
	std::cout << '|';
	if (info.length() > 9)
		std::cout << std::setw(9) << info.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << info;
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

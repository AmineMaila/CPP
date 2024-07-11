/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 19:23:34 by mmaila            #+#    #+#             */
/*   Updated: 2024/07/10 20:44:11 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Contact::Contact() : full(false) {}

void	printInfo(std::string& info)
{
	std::cout << '|';
	if (info.length() > 9)
		std::cout << info.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << info;
}

bool	nbr_check(std::string& str)
{
	size_t	i = 0;
	if (str[i] == '+')
		i++;
	while (i < str.length())
	{
		if (str[i] < '0' || str[i] > '9')
			return (false);
		i++;
	}
	return (true);
}

bool	is_blank(std::string& str)
{
	if (str.empty())
		return (true);
	for (size_t i = 0; i < str.length(); i++)
		if (!std::isspace(str[i]))
			return (false);
	return (true);
}

std::string	get_input(std::string msg)
{
	std::string	input;

	while (1)
	{
		std::cout << msg;
		getline(std::cin, input);
		if (std::cin.eof())
			exit(0);
		if (!is_blank(input))
			break ;
	}
	return (input);
}

void	Contact::setContact()
{
	firstName = get_input("First name     : ");
	lastName = get_input("Last name      : ");
	nickName = get_input("Nickname       : ");
	while (1)
	{
		phoneNumber = get_input("Phone number   : ");
		if (nbr_check(phoneNumber))
			break ;
	}
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

void	Contact::displayInfo(int& index)
{
	std::cout << "-----------------CONTACT #" << index << "-----------------" <<std::endl;
	std::cout << "First name           : " << firstName << std::endl;
	std::cout << "Last name            : " << lastName << std::endl;
	std::cout << "Nickname             : " << nickName << std::endl;
	std::cout << "Phone number         : " << phoneNumber << std::endl;
	std::cout << "Darkest secret       : " << darkestSecret << std::endl;
}

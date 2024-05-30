/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 17:43:52 by mmaila            #+#    #+#             */
/*   Updated: 2024/03/06 17:44:10 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "book.hpp"

void PhoneBook::addContact()
{
	if (index == 8)
		index = 0;
	contacts[index].setContact();
	index++;
}

void	Contact::setContact()
{
	this->first_name = getInput("First name     : ");
	this->last_name = getInput("Last name      : ");
	this->nickname = getInput("Nickname       : ");
	this->phone_number = getInput("Phone number   : ");
	this->darkest_secret = getInput("Darkest secret : ");
	this->full = true;
}

std::string getInput(std::string msg)
{
	std::string input;

	std::cout << msg;
	while (input.empty() || !std::cin.good())
		std::getline(std::cin, input);
	return (input);
}

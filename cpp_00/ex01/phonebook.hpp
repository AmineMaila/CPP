/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:03:20 by mmaila            #+#    #+#             */
/*   Updated: 2024/05/29 16:39:38 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <array>
# include <iostream>
# include <cctype>
# include <iomanip>

# define MAX_CONTACTS 8

class Contact
{
public :
	Contact() : full(false), firstName(""), lastName(""), nickName(""), phoneNumber(""), darkestSecret("") {}
	bool	full;
	void	setContact();
	void	printContact();
	void	displayInfo(int index);

private :
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;
};

class PhoneBook
{
public :
	PhoneBook() : index(0) {}
	void	addContact();
	void	searchContact();

private :
	int	index;
	std::array <Contact, 8> users;
};

#endif
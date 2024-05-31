/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:03:20 by mmaila            #+#    #+#             */
/*   Updated: 2024/05/31 16:03:36 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <cctype>
# include <iomanip>

# define MAX_CONTACTS 8

class Contact
{
public :
	Contact();
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
	Contact users[8];
};

#endif
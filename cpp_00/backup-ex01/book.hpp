/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   book.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 15:18:52 by mmaila            #+#    #+#             */
/*   Updated: 2024/03/06 17:50:49 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOOK_HPP
# define BOOK_HPP

# include <iostream>
# include <iomanip>
# include <array>
# include <string>

class Contact{

public:
	Contact() : full(false), first_name(""), last_name(""), nickname(""), darkest_secret(""), phone_number("") {}
	bool	full;
	void	setContact();
	void	printContact();
	void	displayInfo(int index);
	
private:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	darkest_secret;
	std::string	phone_number;
};

class PhoneBook{

public:
	PhoneBook() : index(0) {}
	void addContact();
	void searchContacts();

private:
	int	index;
	std::array <Contact, 8> contacts;
};

void		printinfo(std::string& info);
std::string	getInput(std::string msg);

#endif
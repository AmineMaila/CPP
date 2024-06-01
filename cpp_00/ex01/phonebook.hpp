/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:03:20 by mmaila            #+#    #+#             */
/*   Updated: 2024/05/31 18:39:58 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <cctype>
# include <iomanip>
# include "Contact.hpp"

# define MAX_CONTACTS 8

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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 18:37:43 by mmaila            #+#    #+#             */
/*   Updated: 2024/06/01 15:05:55 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon
{
public :
	Weapon(std::string type) : type(type) {}
	const	std::string& getType();
	void	setType(std::string newType);

private :
	std::string	type;

};

#endif
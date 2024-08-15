/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 19:46:19 by mmaila            #+#    #+#             */
/*   Updated: 2024/07/14 16:03:05 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
public :
	HumanB(std::string newName);
	~HumanB();
	void	attack(void);
	void	setWeapon(Weapon& equipment);

private :
	std::string	name;
	Weapon		*weapon;

};

#endif
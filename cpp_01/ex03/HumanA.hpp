/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 19:46:35 by mmaila            #+#    #+#             */
/*   Updated: 2024/05/31 20:23:15 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

class HumanA
{
public :
	HumanA(std::string newName, Weapon &equipment) : name(newName), weapon(equipment) {}
	void	attack(void);

private :
	HumanA();
	std::string	name;
	Weapon		&weapon;

};

#endif
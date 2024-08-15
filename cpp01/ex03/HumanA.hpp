/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 19:46:35 by mmaila            #+#    #+#             */
/*   Updated: 2024/07/14 16:03:07 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
public :
	HumanA(std::string newName, Weapon& equipment);
	~HumanA();
	void	attack(void);

private :
	std::string	name;
	Weapon&		weapon;

};

#endif
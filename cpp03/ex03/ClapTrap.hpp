/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 16:23:02 by mmaila            #+#    #+#             */
/*   Updated: 2024/07/22 12:29:24 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
public:
	~ClapTrap();
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& robot);
	ClapTrap& operator=(const ClapTrap& robot);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

protected:
	std::string		name;
	unsigned int	HP;
	unsigned int	EP;
	unsigned int	AD;
};

#endif
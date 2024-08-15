/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 19:01:58 by mmaila            #+#    #+#             */
/*   Updated: 2024/07/22 19:03:34 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	~ScavTrap();
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& robot);
	ScavTrap& operator=(const ScavTrap& robot);

	void attack(const std::string& target);
	void guardGate();

};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 11:15:14 by mmaila            #+#    #+#             */
/*   Updated: 2024/07/22 17:04:06 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
public:
	~DiamondTrap();
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap& robot);

	DiamondTrap& operator=(const DiamondTrap& robot);

	void whoAmI();

private:
	std::string name;
};

#endif
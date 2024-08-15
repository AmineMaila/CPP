/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 10:33:51 by mmaila            #+#    #+#             */
/*   Updated: 2024/07/22 18:15:56 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	~FragTrap();
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap& robot);
	FragTrap& operator=(const FragTrap& robot);

	void highFivesGuys(void);

};

#endif
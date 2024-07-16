/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 16:07:16 by mmaila            #+#    #+#             */
/*   Updated: 2024/07/14 16:24:21 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
public :
	Zombie();
	~Zombie();
	void	anounce( void );
	void	call(std::string z);

private :
	std::string name;
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 19:00:15 by mmaila            #+#    #+#             */
/*   Updated: 2024/07/23 19:21:36 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
public:
	~Brain();
	Brain();
	Brain(const Brain& brain);
	Brain& operator=(const Brain& brain);

	std::string ideas[100];

};

#endif
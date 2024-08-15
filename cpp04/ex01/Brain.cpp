/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 19:00:30 by mmaila            #+#    #+#             */
/*   Updated: 2024/07/24 11:33:54 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::~Brain() {std::cout << "brain destructed" <<std::endl;}

Brain::Brain() {std::cout << "brain constructed" <<std::endl;}

Brain::Brain(const Brain& brain)
{
	std::cout << "brain copy constructed" <<std::endl;
	*this = brain;
}

Brain& Brain::operator=(const Brain& brain)
{
	if (this != &brain)
		for (int i = 0; i < 100; i++)
			this->ideas[i] = brain.ideas[i];
	return (*this);
}
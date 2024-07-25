/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 13:30:35 by mmaila            #+#    #+#             */
/*   Updated: 2024/07/24 18:49:49 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "Character.hpp"

class Ice : public AMateria
{
public:
	~Ice();
	Ice();
	Ice(const Ice& ice);
	Ice& operator=(const Ice& ice);

	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif
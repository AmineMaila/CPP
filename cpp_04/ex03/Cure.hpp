/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 13:30:35 by mmaila            #+#    #+#             */
/*   Updated: 2024/07/24 16:08:49 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cure_HPP
# define Cure_HPP

# include "Character.hpp"

class Cure : public AMateria
{
public:
	~Cure();
	Cure();
	Cure(const Cure& cure);
	Cure& operator=(const Cure& cure);
	
	AMateria* clone() const;
	void use(ICharacter& target);

};

#endif
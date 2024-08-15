/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 16:23:02 by mmaila            #+#    #+#             */
/*   Updated: 2024/07/24 12:48:28 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
public:
	virtual ~Animal();
	Animal();
	Animal(const Animal& wildAnimal);
	Animal& operator=(const Animal& wildAnimal);

	virtual void	makeSound( void ) const = 0;
	const std::string&	getType() const;
	
protected:
	std::string type;
};

#endif
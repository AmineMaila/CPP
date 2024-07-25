/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 16:23:02 by mmaila            #+#    #+#             */
/*   Updated: 2024/07/23 17:10:58 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
public:
	~WrongAnimal();
	WrongAnimal();
	WrongAnimal(const WrongAnimal& wildWorngAnimal);
	WrongAnimal& operator=(const WrongAnimal& wildWorngAnimal);

	void	makeSound( void ) const ;
	const std::string&	getType( void ) const ;

protected:
	std::string type;
};

#endif
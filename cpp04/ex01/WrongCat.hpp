/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 16:23:02 by mmaila            #+#    #+#             */
/*   Updated: 2024/07/23 17:11:22 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	~WrongCat();
	WrongCat();
	WrongCat(const WrongCat& wildWrongCat);
	WrongCat& operator=(const WrongCat& wildWrongCat);

	void	makeSound( void ) const ;
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 13:37:33 by mmaila            #+#    #+#             */
/*   Updated: 2024/07/24 18:52:22 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter
{
public:
	~Character();
	Character();
	Character(std::string name);
	Character(const Character& character);
	Character& operator=(const Character& character);
	
	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
	
private:
	void	emptyGarbage( void );
	std::string name;
	AMateria *garbage[100];
	AMateria *slots[4];
};

#endif
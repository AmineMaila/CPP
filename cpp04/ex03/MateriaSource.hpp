/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 17:24:00 by mmaila            #+#    #+#             */
/*   Updated: 2024/07/24 18:53:28 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
public:
	~MateriaSource();
	MateriaSource();
	MateriaSource(const MateriaSource& source);
	MateriaSource& operator=(const MateriaSource& source);

	void learnMateria(AMateria* materia);
	AMateria* createMateria(std::string const & type);

private:
	AMateria *materias[4];

};

#endif
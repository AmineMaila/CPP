/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 17:24:02 by mmaila            #+#    #+#             */
/*   Updated: 2024/07/25 10:44:54 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (materias[i])
			delete materias[i];
}

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& src)
{
	*this = src;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& src)
{
	if (this != &src)
	{
		for (int i = 0; i < 4; i++)
			if (this->materias[i])
				delete this->materias[i];
		for (int i = 0; i < 4; i++)
			if (src.materias[i])
				this->materias[i] = src.materias[i]->clone();
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* materia)
{
	int i = 0;
	while (i < 4 && this->materias[i])
		i++;
	if (i < 4)
		materias[i] = materia;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
		if (this->materias[i] && this->materias[i]->getType() == type)
			return (this->materias[i]->clone());
	return (0);
}

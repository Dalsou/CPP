/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 17:30:39 by afoulqui          #+#    #+#             */
/*   Updated: 2021/10/12 10:53:18 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

// Consructors & Destructor

MateriaSource::MateriaSource(void) {
	for (int i = 0; i < 4; i++)
		this->materia[i] = NULL;
}

MateriaSource::~MateriaSource(void) {
	for (int i = 0; i < 4; i++)
		if (this->materia[i])
			delete this->materia[i];
}

MateriaSource::MateriaSource(const MateriaSource& copy) {
	*this = copy;
}

//Operator

MateriaSource &MateriaSource::operator=(const MateriaSource& copy) {
	for (int i = 0; i < 4; i++)
	{
		if (this->materia[i])
			delete this->materia[i];
		this->materia[i] = copy.materia[i];
	}
	return (*this);
}

// Function

void	MateriaSource::learnMateria(AMateria* m) {
	for (int i = 0; i < 4; i++)
	{
		if (!this->materia[i])
		{
			this->materia[i] = m;
			return ;
		}
	}
	delete m;
}

AMateria	*MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++)
	{
		if (this->materia[i] && this->materia[i]->getType() == type)
			return (this->materia[i]->clone());
	}
	return (NULL);
}
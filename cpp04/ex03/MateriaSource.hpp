/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 17:23:13 by afoulqui          #+#    #+#             */
/*   Updated: 2021/10/11 17:26:20 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *materia[4];

	public:
		//Constructors & Dectructor
		MateriaSource( void  );
		~MateriaSource( void );
		MateriaSource(const MateriaSource& copy);
		// Operator
		MateriaSource& operator=(const MateriaSource& op);
		// Function
		void learnMateria(AMateria *m);
		AMateria* createMateria(std::string const & type);
};

#endif
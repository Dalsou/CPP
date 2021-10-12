/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 10:30:46 by afoulqui          #+#    #+#             */
/*   Updated: 2021/10/12 10:13:52 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include "AMateria.hpp"

class	Cure : public AMateria {
	public:
		//Constructors & Dectructor
		Cure( void  );
		~Cure( void );
		Cure(const Cure& copy);
		// Operator
		Cure& operator=(const Cure& op);
		// Functions
		AMateria *clone( void ) const;
		void use(ICharacter & target);
};

#endif
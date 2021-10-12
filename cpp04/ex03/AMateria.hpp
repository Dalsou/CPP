/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 10:59:45 by afoulqui          #+#    #+#             */
/*   Updated: 2021/10/12 10:16:40 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>

class ICharacter;
#include "ICharacter.hpp"

class AMateria {
	
	protected:
		std::string	type;

	public:
		// Constructors & Destructor
		AMateria( void );
		virtual ~AMateria( void );
		AMateria(std::string const & type);
		AMateria(const AMateria& copy);
		// Operator
		AMateria& operator=(const AMateria& op);
		// Getter function
		const std::string &getType() const; //Returns the materia type
		// Action functions
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target) = 0;
};

#endif
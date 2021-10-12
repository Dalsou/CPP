/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 11:40:50 by afoulqui          #+#    #+#             */
/*   Updated: 2021/10/12 10:14:32 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include "AMateria.hpp"

class	Ice : public AMateria {
	public:
		//Constructors & Dectructor
		Ice( void  );
		~Ice( void );
		Ice(const Ice& copy);
		// Operator
		Ice& operator=(const Ice& op);
		// Functions
		AMateria *clone( void ) const;
		void use(ICharacter & target);
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 10:32:32 by afoulqui          #+#    #+#             */
/*   Updated: 2021/10/12 10:11:11 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

// Constructors & Destructor

Cure::Cure() : AMateria("cure") {
}

Cure::~Cure() {
}

Cure::Cure(const Cure& copy) : AMateria(copy) {
	*this = copy;
}

// Operator

Cure&	Cure::operator=(const Cure& op) {
	AMateria::operator=(op);
	return (*this);
}

// Functions

AMateria* Cure::clone() const {
	return (new Cure(*this));
}

void	Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}
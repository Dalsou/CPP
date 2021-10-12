/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 11:46:47 by afoulqui          #+#    #+#             */
/*   Updated: 2021/10/12 10:13:13 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

// Constructors & Destructor

Ice::Ice() : AMateria("ice") {
}

Ice::~Ice() {
}

Ice::Ice(const Ice& copy) : AMateria(copy) {
	*this = copy;
}

// Operator

Ice&	Ice::operator=(const Ice& op) {
	AMateria::operator=(op);
	return (*this);
}

// Functions

AMateria* Ice::clone() const {
	return (new Ice(*this));
}

void	Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}
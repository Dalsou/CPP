/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 11:21:37 by afoulqui          #+#    #+#             */
/*   Updated: 2021/10/11 17:09:25 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

// Consructors & Destructor

AMateria::AMateria(void) {
}

AMateria::~AMateria(void) {
}

AMateria::AMateria(std::string const & newType) {
	this->type = newType;
}

AMateria::AMateria(const AMateria& copy) {
	*this = copy;
}

// Operator

AMateria& AMateria::operator=(const AMateria& op) {
	this->type = op.getType();
	return (*this);
}

// Getter Function

const std::string& AMateria::getType(void) const {
	return (this->type);
}

// Action Function

void	AMateria::use(ICharacter& target) {
	(void)target;
}
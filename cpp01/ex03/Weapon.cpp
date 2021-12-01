/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 10:59:05 by afoulqui          #+#    #+#             */
/*   Updated: 2021/11/25 13:36:08 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
	std::cout << "A new weapon has been created\n";
}

Weapon::Weapon(std::string type):
_type(type)
{
	std::cout << this->_type << " weapon has been created\n";
}

const std::string&	Weapon::getType(void) {
	return (this->_type);
}

void	Weapon::setType(std::string type) {
	this->_type = type;
}

Weapon::~Weapon(void)
{
	std::cout << "The weapon has been destroyed\n";
}
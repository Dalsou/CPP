/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 10:59:05 by afoulqui          #+#    #+#             */
/*   Updated: 2021/07/06 17:14:26 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{}

Weapon::Weapon(std::string first_type) {
	this->type = first_type;
}

const std::string&	Weapon::getType(void) {
	return (this->type);
}

void	Weapon::setType(std::string new_type) {
	this->type = new_type;
}

Weapon::~Weapon(void)
{}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 11:32:09 by afoulqui          #+#    #+#             */
/*   Updated: 2021/07/06 17:23:00 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string new_name) {
	this->name = new_name;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void	HumanB::attack(void) {
	std::cout << this->name << " attacks with his "
				<< this->weapon->getType() << std::endl;
}

HumanB::~HumanB(void) 
{}
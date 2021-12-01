/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 11:32:09 by afoulqui          #+#    #+#             */
/*   Updated: 2021/12/01 13:59:29 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name):
_name(name)
{
	std::cout << "Human B has been created\n";
}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;
}

void	HumanB::attack(void) {
	if (!this->_weapon)
		std::cout << this->_name << " can't attack witout a weapon\n";
	else
		std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}

HumanB::~HumanB(void) 
{
	std::cout << "Human B has been destroyed\n";
}
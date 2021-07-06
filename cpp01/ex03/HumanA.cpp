/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 11:12:31 by afoulqui          #+#    #+#             */
/*   Updated: 2021/07/06 17:19:02 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string new_name, Weapon& weapon) : weapon(weapon) {
	this->name = new_name;
}

void	HumanA::attack(void) {
	std::cout << this->name << " attacks with his "
				<< this->weapon.getType() << std::endl;
}

HumanA::~HumanA(void) 
{}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 18:29:57 by afoulqui          #+#    #+#             */
/*   Updated: 2021/08/12 18:51:44 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap(), ScavTrap(), FragTrap() {
	std::cout << "DiamondTrap default constructor called\n";
	this->hitPoints = this->FragTrap::hitPoints;
	this->energyPoints = 10;
	this->attackDamage = 0;
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "DiamondTrap destructor called\n";
}

DiamondTrap::DiamondTrap(std::string name) {
	std::cout << "DiamondTrap constructor called\n";
	this->name = name;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy) {
	std::cout << "DiamondTrap copy constructor called\n";
	*this = copy;
}

// Operator

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& op) {
	std::cout << "DiamondTrap copy operator called\n";
	this->name = op.name;
	this->hitPoints = op.hitPoints;
	this->energyPoints = op.energyPoints;
	this->attackDamage = op.energyPoints;
	return (*this);
}
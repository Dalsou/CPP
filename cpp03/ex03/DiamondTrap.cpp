/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 18:29:57 by afoulqui          #+#    #+#             */
/*   Updated: 2021/12/01 15:32:39 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) :
ClapTrap(), 
ScavTrap(), 
FragTrap() 
{
	std::cout << "DiamondTrap default constructor called\n";
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "DiamondTrap destructor called\n";
}

DiamondTrap::DiamondTrap(const std::string& name) : 
ClapTrap(name), 
ScavTrap(name), 
FragTrap(name) 
{
	std::cout << "DiamondTrap constructor called\n";
	ClapTrap::name = name + "_clap_name";
	this->name = name;
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
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

// Function

void	DiamondTrap::whoAmI() const
{
	std::cout << "My name is " << this->name << " and my clapTrap name is " << this->ClapTrap::name << std::endl;
}
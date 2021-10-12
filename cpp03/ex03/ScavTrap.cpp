/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 12:18:53 by afoulqui          #+#    #+#             */
/*   Updated: 2021/08/12 18:05:11 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Constructors & Destructor

ScavTrap::ScavTrap(void) {
	std::cout << "ScavTrap default constructor called\n";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap destructor called\n";
}

ScavTrap::ScavTrap(std::string name) {
	std::cout << "ScavTrap constructor called\n";
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& copy) {
	std::cout << "ScavTrap copy constructor called\n";
	*this = copy;
}

// Operator

ScavTrap& ScavTrap::operator=(const ScavTrap& op) {
	std::cout << "ScavTrap copy operator called\n";
	this->name = op.name;
	this->hitPoints = op.hitPoints;
	this->energyPoints = op.energyPoints;
	this->attackDamage = op.energyPoints;
	return (*this);
}

// Funtcion

void	ScavTrap::guardGate(void) {
	std::cout << "ScavTrap " << this->getName() << " has entered in Gate keeper mode !\n";
}

void	ScavTrap::attack(std::string const & target)
{
	if (this->energyPoints == 0)
	{
		std::cout << "ScavTrap " << this->getName() << " can't attacks !\n";
		return ;
	}
	std::cout << "ScavTrap " << this->getName() << " attack " << target
	<< ", causing " << this->getAttackDamage() << " points of damage !\n";
	this->energyPoints--;
}
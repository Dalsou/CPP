/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 11:08:49 by afoulqui          #+#    #+#             */
/*   Updated: 2021/08/12 12:13:11 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Constructors & Destructor

ClapTrap::ClapTrap(void) {
	std::cout << "ClapTrap default constructor called\n";
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap destructor called\n";
}

ClapTrap::ClapTrap(std::string name) {
	std::cout << "ClapTrap constructor called\n";
	this->name = name;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& copy) {
	std::cout << "ClapTrap copy constructor called\n";
	*this = copy;
}

// Operator

ClapTrap& ClapTrap::operator=(const ClapTrap& op) {
	std::cout << "ClapTrap copy operator called\n";
	this->name = op.name;
	this->hitPoints = op.hitPoints;
	this->energyPoints = op.energyPoints;
	this->attackDamage = op.energyPoints;
	return (*this);
}

// Setter & Getter Functions

void ClapTrap::setName(std::string newName) {
	this->name = newName;
}

std::string ClapTrap::getName(void) const {
	return (this->name);
}

unsigned int ClapTrap::getHitPoints(void) const {
	return (this->hitPoints);
}

unsigned int ClapTrap::getEnergyPoints(void) const {
	return (this->energyPoints);
}

unsigned int ClapTrap::getAttackDamage(void) const {
	return (this->attackDamage);
}

// Action Functions

void	ClapTrap::attack(std::string const & target)
{
	if (this->energyPoints == 0)
	{
		std::cout << "ClapTrap " << this->getName() << " can't attacks !\n";
		return ;
	}
	else
	{
		std::cout << "ClapTrap " << this->getName() << " attack " << target
		<< ", causing " << this->getAttackDamage() << " points of damage !\n";
		this->energyPoints--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->getName() << " received " << amount
	<< " of damage !\n";
	if (this->hitPoints <= amount)
	{
		this->hitPoints = 0;
		std::cout << "ClapTrap " << this->getName() << " is dead ! \n";
	}	
	else
		this->hitPoints -= amount;	
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << this->getName() << " is repaired of " << amount << " points !\n";
	this->hitPoints += amount;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 18:08:51 by afoulqui          #+#    #+#             */
/*   Updated: 2021/08/12 18:26:48 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// Constructors & Destructor

FragTrap::FragTrap(void) {
	std::cout << "FragTrap default constructor called\n";
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap destructor called\n";
}

FragTrap::FragTrap(std::string name) {
	std::cout << "FragTrap constructor called\n";
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& copy) {
	std::cout << "FragTrap copy constructor called\n";
	*this = copy;
}

// Operator

FragTrap& FragTrap::operator=(const FragTrap& op) {
	std::cout << "FragTrap copy operator called\n";
	this->name = op.name;
	this->hitPoints = op.hitPoints;
	this->energyPoints = op.energyPoints;
	this->attackDamage = op.energyPoints;
	return (*this);
}

// Functions

void	FragTrap::highFivesGuys(void)
{
	std::cout << "High Fives bro !\n";
}

void	FragTrap::attack(std::string const & target)
{
	if (this->energyPoints == 0)
	{
		std::cout << "FragTrap " << this->getName() << " can't attacks !\n";
		return ;
	}
	std::cout << "FragTrap " << this->getName() << " attack " << target
	<< ", causing " << this->getAttackDamage() << " points of damage !\n";
	this->energyPoints--;
}
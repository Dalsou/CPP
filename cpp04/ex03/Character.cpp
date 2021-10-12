/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 16:57:42 by afoulqui          #+#    #+#             */
/*   Updated: 2021/10/11 17:16:58 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

// Consructors & Destructor

Character::Character(void) : name("Default") {
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::~Character(void) {
	for (int i = 0; i < 4; i++)
		if (this->inventory[i] != NULL)
			delete this->inventory[i];
}

Character::Character(std::string const & newName) : name(newName) {
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character(const Character& copy) {
	*this = copy;
}

// Operator

Character& Character::operator=(const Character& op) {
	this->name = op.getName();
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] != NULL)
			delete this->inventory[i];
		if (op.inventory[i] != NULL)
			this->inventory[i] = op.inventory[i]->clone();
		else
			this->inventory[i] = NULL;
	}
	return (*this);
}

// Getter Function

const std::string	&Character::getName(void) const {
	return (this->name);
}

//Functions

void	Character::equip(AMateria *m) {
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] == NULL)
		{
			this->inventory[i] = m;
			return ;
		}
	}
}

void	Character::unequip(int idx) {
	if (idx < 0|| idx > 3)
		return ;
	this->inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter &target) {
	if (idx < 0|| idx > 3)
		return ;
	if (this->inventory[idx] != NULL)
		this->inventory[idx]->use(target);
}
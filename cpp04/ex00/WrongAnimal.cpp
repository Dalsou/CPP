/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 17:16:23 by afoulqui          #+#    #+#             */
/*   Updated: 2021/09/21 18:01:30 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// Constructors & Destructor

WrongAnimal::WrongAnimal(void) {
	std::cout << "Wrong Animal default constructor called\n";
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "Wrong Animal destructor called\n";
}

WrongAnimal::WrongAnimal(std::string newType) {
	this->type = newType;
	std::cout << "Wrong Animal constructor called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy) {
	*this = copy;
	std::cout << "Wrong Animal copy constructor called\n";
}

// Operator

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& op) {
	this->type = op.getType();
	std::cout << "Wrong Animal copy operator called\n";
	return (*this);
}

// Setter & Getter Functions

void	WrongAnimal::setType(std::string newType) {
	this->type = newType;
}

std::string	WrongAnimal::getType(void) const {
	return (this->type);
}

// Action Functions

void	WrongAnimal::makeSound(void) const {
	std::cout << "* Mysterious Wrong Animal sound *\n";
}
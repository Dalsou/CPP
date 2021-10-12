/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 15:53:50 by afoulqui          #+#    #+#             */
/*   Updated: 2021/09/29 11:37:16 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Constructors & Destructor

Animal::Animal(void) {
	std::cout << "Animal default constructor called\n";
}

Animal::~Animal(void) {
	std::cout << "Animal destructor called\n";
}

Animal::Animal(std::string newType) {
	this->type = newType;
	std::cout << "Animal constructor called\n";
}

Animal::Animal(const Animal& copy) {
	*this = copy;
	std::cout << "Animal copy constructor called\n";
}

// Operator

Animal& Animal::operator=(const Animal& op) {
	this->type = op.getType();
	std::cout << "Animal copy operator called\n";
	return (*this);
}

// Setter & Getter Functions

void	Animal::setType(std::string newType) {
	this->type = newType;
}

std::string	Animal::getType(void) const {
	return (this->type);
}

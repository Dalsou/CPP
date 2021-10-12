/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 16:52:10 by afoulqui          #+#    #+#             */
/*   Updated: 2021/09/21 16:53:40 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Constructors & Destructor

Dog::Dog(void) {
	this->type = "Dog";
	std::cout << "Dog constructor called\n";
}

Dog::~Dog(void) {
	std::cout << "Dog destructor called\n";
}

Dog::Dog(const Dog& copy) {
	*this= copy;
	std::cout << "Dog copy constructor called\n";
}

// Operator

Dog&	Dog::operator=(const Dog& op) {
	Animal::operator=(op);
	std::cout << "Dog copy operator called\n";
	return (*this);
}

// Action Functions

void	Dog::makeSound(void) const {
	std::cout << "Woof Woof\n";
}
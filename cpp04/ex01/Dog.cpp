/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 16:52:10 by afoulqui          #+#    #+#             */
/*   Updated: 2021/09/28 11:41:01 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Constructors & Destructor

Dog::Dog(void) {
	this->type = "Dog";
	brain = new Brain();
	std::cout << "Dog constructor called\n";
}

Dog::~Dog(void) {
	delete brain;
	std::cout << "Dog destructor called\n";
}

Dog::Dog(const Dog& copy) {
	*this= copy;
	brain = new Brain;
	*brain = *(copy.brain);
	std::cout << "Dog copy constructor called\n";
}

// Operator

Dog&	Dog::operator=(const Dog& op) {
	Animal::operator=(op);
	*(this->brain) = *(op.brain);
	std::cout << "Dog copy operator called\n";
	return (*this);
}

// Action Functions

void	Dog::makeSound(void) const {
	std::cout << "Woof Woof\n";
}
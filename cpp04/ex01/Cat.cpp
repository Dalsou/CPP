/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 16:39:45 by afoulqui          #+#    #+#             */
/*   Updated: 2021/09/28 11:40:51 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Constructors & Destructor

Cat::Cat(void) {
	this->type = "Cat";
	brain = new Brain();
	std::cout << "Cat constructor called\n";
}

Cat::~Cat(void) {
	delete brain;
	std::cout << "Cat destructor called\n";
}

Cat::Cat(const Cat& copy) {
	*this= copy;
	brain = new Brain;
	*brain = *(copy.brain);
	std::cout << "Cat copy constructor called\n";
}

// Operator

Cat&	Cat::operator=(const Cat& op) {
	Animal::operator=(op);
	*(this->brain) = *(op.brain);
	std::cout << "Cat copy operator called\n";
	return (*this);
}

// Action Functions

void	Cat::makeSound(void) const {
	std::cout << "Meeeooowwww\n";
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 17:27:02 by afoulqui          #+#    #+#             */
/*   Updated: 2021/09/21 18:01:11 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// Constructors & Destructor

WrongCat::WrongCat(void) {
	this->type = "Wrong Cat";
	std::cout << "Wrong Cat constructor called\n";
}

WrongCat::~WrongCat(void) {
	std::cout << "Wrong Cat destructor called\n";
}

WrongCat::WrongCat(const WrongCat& copy) {
	*this= copy;
	std::cout << "Wrong Cat copy constructor called\n";
}

// Operator

WrongCat&	WrongCat::operator=(const WrongCat& op) {
	WrongAnimal::operator=(op);
	std::cout << "Wrong Cat copy operator called\n";
	return (*this);
}

// Action Functions

void	WrongCat::makeSound(void) const {
	std::cout << "Wrong Meeooowww\n";
}
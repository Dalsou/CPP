/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 17:28:05 by afoulqui          #+#    #+#             */
/*   Updated: 2021/11/29 10:56:57 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Consdtructors & Destructor

Fixed::Fixed(void) {
	std::cout << "Default constructor called\n";
	this->n = 0;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called\n";
}

Fixed::Fixed(const Fixed& f) {
	std::cout << "Copy constructor called\n";
	*this = f;
}

// Operator

Fixed &Fixed::operator=(const Fixed& f) {
	std::cout << "Assignation operator called\n";
	if (this != &f)
		this->n = f.getRawBits();
	return (*this);
}

// Functions

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called\n";
	return (this->n);
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called\n";
	this->n = raw;
}

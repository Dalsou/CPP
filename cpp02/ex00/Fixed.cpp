/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 17:28:05 by afoulqui          #+#    #+#             */
/*   Updated: 2021/07/07 17:44:18 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) {
	std::cout << "Default constructor called\n";
	this->n = 0;
}

Fixed::Fixed(const Fixed& f) {
	std::cout << "Copy constructor called\n";
	*this = f;
}

Fixed &Fixed::operator=(const Fixed& f) {
	std::cout << "Assignation operator called\n";
	if (this != &f)
		this->n = f.getRawBits();
	return (*this);
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called\n";
	return (this->n);
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called\n";
	this->n = raw;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called\n";
}
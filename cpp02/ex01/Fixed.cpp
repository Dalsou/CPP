/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 14:22:18 by afoulqui          #+#    #+#             */
/*   Updated: 2021/07/08 14:41:59 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) {
	std::cout << "Default constructor called\n";
	this->n = 0;
}

Fixed::Fixed(const int i) {
	std::cout << "Int constructor called\n";
	this->n = i << bits_frac;
}

Fixed::Fixed(const float f) {
	std::cout << "Float constructor called\n";
	this->n = roundf(f * (1 << bits_frac));
}

Fixed::Fixed(const Fixed& src) {
	std::cout << "Copy constructor called\n";
	*this = src;
}

Fixed &Fixed::operator=(const Fixed& src) {
	std::cout << "Assignation operator called\n";
	if (this != &src)
		this->n = src.getRawBits();
	return (*this);
}

int Fixed::getRawBits() const {
	return (this->n);
}

void Fixed::setRawBits(int const raw) {
	this->n = raw;
}

float Fixed::toFloat(void) const {
	return ((float)(this->n) / (1 << bits_frac));
}

int Fixed::toInt(void) const {
	return ((int)(this->n) >> bits_frac);
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called\n";
}

std::ostream& operator<<(std::ostream& os, const Fixed& src) {
	return (os << src.toFloat());
}
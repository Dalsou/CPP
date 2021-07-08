/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 14:46:38 by afoulqui          #+#    #+#             */
/*   Updated: 2021/07/08 15:56:35 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) {
	this->n = 0;
}

Fixed::Fixed(const int i) {
	this->n = i << bits_frac;
}

Fixed::Fixed(const float f) {
	this->n = roundf(f * (1 << bits_frac));
}

Fixed::Fixed(const Fixed& src) {
	*this = src;
}

Fixed &Fixed::operator=(const Fixed& src) {
	if (this != &src)
		this->n = src.getRawBits();
	return (*this);
}

bool Fixed::operator<(const Fixed& src) const {
	return (this->getRawBits() < src.getRawBits());
}

bool Fixed::operator>(const Fixed& src) const {
	return (this->getRawBits() > src.getRawBits());
}

bool Fixed::operator<=(const Fixed& src) const {
	return (this->getRawBits() <= src.getRawBits());
}

bool Fixed::operator>=(const Fixed& src) const {
	return (this->getRawBits() >= src.getRawBits());
}

bool Fixed::operator==(const Fixed& src) const {
	return (this->getRawBits() == src.getRawBits());
}

bool Fixed::operator!=(const Fixed& src) const {
	return (this->getRawBits() != src.getRawBits());
}

Fixed Fixed::operator+(const Fixed& src) const {
	
	Fixed ret;

	ret.setRawBits(this->n + src.getRawBits());
	return (ret);
}

Fixed Fixed::operator-(const Fixed& src) const {
	
	Fixed ret;

	ret.setRawBits(this->n - src.getRawBits());
	return (ret);
}

Fixed Fixed::operator*(const Fixed& src) const {
	
	Fixed ret;

	ret.setRawBits((this->n * src.getRawBits()) >> this->bits_frac);
	return (ret);
}

Fixed Fixed::operator/(const Fixed& src) const {
	
	Fixed ret;

	ret.setRawBits((this->n << this->bits_frac) / src.getRawBits());
	return (ret);
}

Fixed& Fixed::operator++(void) {
	this->n++;
	return (*this);
}

Fixed Fixed::operator++(int) {

	Fixed ret(*this);

	operator++();
	return (ret);
}

Fixed& Fixed::operator--(void) {
	this->n--;
	return (*this);
}

Fixed Fixed::operator--(int) {

	Fixed ret(*this);

	operator--();
	return (ret);
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
}

std::ostream& operator<<(std::ostream& os, const Fixed& src) {
	return (os << src.toFloat());
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
	
	if (a > b)
		return (b);
	return (a);
}

Fixed& Fixed::min(Fixed& a, Fixed& b) {
	
	if (a > b)
		return (b);
	return (a);
}

const Fixed& min(const Fixed& a, const Fixed& b) {
	return (Fixed::min(a, b));
}

Fixed& min(Fixed& a, Fixed& b) {
	return (Fixed::min(a, b));
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
	
	if (a > b)
		return (a);
	return (b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
	
	if (a > b)
		return (a);
	return (b);
}

const Fixed& max(const Fixed& a, const Fixed& b) {
	return (Fixed::max(a, b));
}

Fixed& max(Fixed& a, Fixed& b) {
	return (Fixed::max(a, b));
}
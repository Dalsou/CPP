/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 14:47:07 by afoulqui          #+#    #+#             */
/*   Updated: 2021/07/08 16:02:44 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int	n;
		static const int bits_frac = 8;
	
	public:
		Fixed( void );
		Fixed( const int i);
		Fixed( const float f);
		Fixed(const Fixed& src);

		Fixed& operator=(const Fixed& src);

		bool operator>(const Fixed& src) const;
		bool operator<(const Fixed& src) const;
		bool operator>=(const Fixed& src) const;
		bool operator<=(const Fixed& src) const;
		bool operator==(const Fixed& src) const;
		bool operator!=(const Fixed& src) const;

		Fixed operator+(const Fixed& src) const;
		Fixed operator-(const Fixed& src) const;
		Fixed operator*(const Fixed& src) const;
		Fixed operator/(const Fixed& src) const;

		Fixed& operator++( void );
		Fixed operator++(int);
		Fixed& operator--( void );
		Fixed operator--(int);

		const static Fixed& min(const Fixed& a, const Fixed& b);
		static Fixed& min(Fixed& a, Fixed& b);
		const static Fixed& max(const Fixed& a, const Fixed& b);
		static Fixed& max(Fixed& a, Fixed& b);

		int	getRawBits( void ) const;
		void setRawBits(int const raw);

		float toFloat( void ) const;
		int toInt( void ) const;

		~Fixed( void );
};

std::ostream& operator<<(std::ostream& os, const Fixed& src);
const Fixed& min(const Fixed& a, const Fixed& b);
Fixed& min(Fixed& a, Fixed& b);
const Fixed& max(const Fixed& a, const Fixed& b);
Fixed& max(Fixed& a, Fixed& b);

# endif
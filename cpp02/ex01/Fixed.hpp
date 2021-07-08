/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 14:21:51 by afoulqui          #+#    #+#             */
/*   Updated: 2021/07/08 14:43:16 by afoulqui         ###   ########.fr       */
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
		int	getRawBits( void ) const;
		void setRawBits(int const raw);
		float toFloat( void ) const;
		int toInt( void ) const;
		~Fixed( void );
};

std::ostream& operator<<(std::ostream& os, const Fixed& src);

# endif
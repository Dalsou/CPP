/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 14:21:51 by afoulqui          #+#    #+#             */
/*   Updated: 2021/11/29 11:12:25 by afoulqui         ###   ########.fr       */
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
		// Constructors & Destructor
		Fixed(void);
		~Fixed(void);
		Fixed(const int i);
		Fixed(const float f);
		Fixed(const Fixed& src);
		// Operator
		Fixed& operator=(const Fixed& src);
		//Functions
		int	getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& src);

# endif
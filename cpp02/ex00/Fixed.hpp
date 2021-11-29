/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 17:22:35 by afoulqui          #+#    #+#             */
/*   Updated: 2021/11/29 10:49:37 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int	n;
		static const int bits_frac = 8;
	
	public:
		// Constructors & Destructor
		Fixed(void);
		~Fixed(void);
		Fixed(const Fixed& f);
		//Operator
		Fixed& operator=(const Fixed& f);
		//Functions
		int	getRawBits(void) const;
		void setRawBits(int const raw);
};

# endif
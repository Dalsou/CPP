/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 17:22:35 by afoulqui          #+#    #+#             */
/*   Updated: 2021/07/07 17:42:26 by afoulqui         ###   ########.fr       */
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
		Fixed( void );
		Fixed(const Fixed& f);
		Fixed& operator=(const Fixed& f);
		int	getRawBits( void ) const;
		void setRawBits(int const raw);
		~Fixed( void );
};

# endif
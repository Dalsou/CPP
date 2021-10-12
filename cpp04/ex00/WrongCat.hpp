/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 17:25:21 by afoulqui          #+#    #+#             */
/*   Updated: 2021/09/21 17:57:43 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		// Constructors & Destructor
		WrongCat( void );
		virtual ~WrongCat( void );
		WrongCat(const WrongCat& copy);
		// Operator
		WrongCat& operator=(const WrongCat& op);
		// Action Function
		void makeSound( void ) const;
};

#endif
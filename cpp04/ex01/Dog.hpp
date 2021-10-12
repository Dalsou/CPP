/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 16:50:45 by afoulqui          #+#    #+#             */
/*   Updated: 2021/09/28 11:41:10 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain* brain;
		
	public:
		// Constructors & Destructor
		Dog( void );
		virtual ~Dog( void );
		Dog(const Dog& copy);
		// Operator
		Dog& operator=(const Dog& op);
		// Action Function
		void makeSound( void ) const;
};

#endif
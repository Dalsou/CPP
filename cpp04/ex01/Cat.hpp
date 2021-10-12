/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 16:32:55 by afoulqui          #+#    #+#             */
/*   Updated: 2021/09/28 11:40:42 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain* brain;
	public:
		// Constructors & Destructor
		Cat( void );
		virtual ~Cat( void );
		Cat(const Cat& copy);
		// Operator
		Cat& operator=(const Cat& op);
		// Action Function
		void makeSound( void ) const;
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 15:31:24 by afoulqui          #+#    #+#             */
/*   Updated: 2021/09/21 17:56:55 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		std::string	type;

	public:
		// Constructors & Destructor
		Animal( void );
		virtual ~Animal( void );
		Animal(std::string type);
		Animal(const Animal& copy);
		//Operator
		Animal& operator = (const Animal& op);
		// Setter & Getter Functions
		void setType(std::string newType);
		std::string getType( void ) const;
		// Action Function
		virtual void makeSound( void ) const;
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 17:14:16 by afoulqui          #+#    #+#             */
/*   Updated: 2021/09/21 17:57:35 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	protected:
		std::string	type;

	public:
		// Constructors & Destructor
		WrongAnimal( void );
		virtual ~WrongAnimal( void );
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal& copy);
		//Operator
		WrongAnimal& operator = (const WrongAnimal& op);
		// Setter & Getter Functions
		void setType(std::string newType);
		std::string getType( void ) const;
		// Action Function
		virtual void makeSound( void ) const;
};

#endif
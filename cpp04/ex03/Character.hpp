/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 16:01:29 by afoulqui          #+#    #+#             */
/*   Updated: 2021/10/01 19:04:55 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class	Character : public ICharacter {

	private:
		std::string name;
		AMateria *inventory[4];
	
	public:
		//Constructors & Dectructor
		Character( void  );
		~Character( void );
		Character(std::string const & name);
		Character(const Character& copy);
		// Operator
		Character& operator=(const Character& op);
		// Getter Function
		const std::string &getName( void ) const;
		// Functions
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 11:28:30 by afoulqui          #+#    #+#             */
/*   Updated: 2021/07/06 17:21:39 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB {

	public:
		HumanB(std::string name);
		void setWeapon(Weapon &weapon);
		void attack( void );
		~HumanB( void );
	
	private:
		std::string	name;
		Weapon	*weapon;
};

# endif
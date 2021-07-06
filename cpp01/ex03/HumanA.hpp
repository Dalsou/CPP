/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 11:07:46 by afoulqui          #+#    #+#             */
/*   Updated: 2021/07/06 17:18:04 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA {

	public:
		HumanA(std::string name, Weapon &weapon);
		void attack( void );
		~HumanA( void );
	
	private:
		std::string	name;
		Weapon &weapon;
};

# endif
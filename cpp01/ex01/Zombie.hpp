/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 18:06:18 by afoulqui          #+#    #+#             */
/*   Updated: 2021/07/01 18:32:43 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {

	public:
		Zombie( void );
		void announce( void );
		void setName(std::string name);
		~Zombie( void );

	private:
		std::string name;
};

Zombie*	zombieHorde(int N, std::string name);

#endif
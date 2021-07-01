/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 15:48:14 by afoulqui          #+#    #+#             */
/*   Updated: 2021/07/01 17:25:12 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {

	public:

		std::string	name;
		
		Zombie(std::string	new_name);
		void announce( void );
		~Zombie( void );
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

#endif
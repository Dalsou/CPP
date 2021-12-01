/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 15:48:14 by afoulqui          #+#    #+#             */
/*   Updated: 2021/11/25 12:04:43 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {

	private:
		std::string	_name;

	public:	
		Zombie(std::string	name);
		~Zombie(void);
		void announce(void);		
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

#endif
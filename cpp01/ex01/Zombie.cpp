/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 18:09:43 by afoulqui          #+#    #+#             */
/*   Updated: 2021/07/01 18:28:52 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{}

void	Zombie::setName(std::string name)
{
	this->name = name;
}

void	Zombie::announce(void)
{
	std::cout << "<" << name << "> BraiiiiiiinnnzzzZ...\n";
}

Zombie::~Zombie(void)
{
	std::cout << name << " has been destroyed !\n";
}
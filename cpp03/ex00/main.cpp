/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 11:08:40 by afoulqui          #+#    #+#             */
/*   Updated: 2021/11/30 14:42:37 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int main() {

	ClapTrap	francis("Francis");
	ClapTrap	michel;

	std::cout << std::endl;

	francis.attack("Louis");
	francis.takeDamage(3);
	francis.beRepaired(2);
	francis.attack("Super Mechant");
	francis.takeDamage(10);

	std::cout << std::endl;

	michel.setName("Michel");
	michel.attack("Francis");
	michel.takeDamage(5);
	michel.beRepaired(3);
	michel.attack("Super Mechant");
	michel.takeDamage(10);

	std::cout << std::endl;

	return (0);
}
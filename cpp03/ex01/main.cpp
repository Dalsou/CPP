/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 12:18:45 by afoulqui          #+#    #+#             */
/*   Updated: 2021/11/30 15:33:53 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {

	ClapTrap	nico("Nico");
	ScavTrap	luis("Luis");

	std::cout << std::endl;

	nico.attack("Adam");
	nico.takeDamage(3);
	luis.attack("Adam");
	luis.takeDamage(8);
	nico.beRepaired(3);
	luis.beRepaired(2);
	luis.guardGate();

	std::cout << std::endl;

	return (0);
}
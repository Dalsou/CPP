/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 12:18:45 by afoulqui          #+#    #+#             */
/*   Updated: 2021/08/12 18:25:50 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {

	ClapTrap	nico("Nico");
	ScavTrap	luis("Luis");
	FragTrap	anna("Anna");

	nico.attack("Adam");
	nico.takeDamage(3);
	luis.attack("Adam");
	luis.takeDamage(8);
	anna.attack("Adam");
	anna.takeDamage(8);
	nico.beRepaired(3);
	luis.beRepaired(2);
	anna.beRepaired(5);
	luis.guardGate();
	anna.highFivesGuys();
	return (0);
}
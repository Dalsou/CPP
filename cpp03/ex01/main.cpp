/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 12:18:45 by afoulqui          #+#    #+#             */
/*   Updated: 2021/08/12 18:05:17 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {

	ClapTrap	nico("Nico");
	ScavTrap	luis("Luis");

	nico.attack("Adam");
	nico.takeDamage(3);
	luis.attack("Adam");
	luis.takeDamage(8);
	nico.beRepaired(3);
	luis.beRepaired(2);
	luis.guardGate();
	return (0);
}
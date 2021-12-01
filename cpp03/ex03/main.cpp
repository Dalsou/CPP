/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 12:18:45 by afoulqui          #+#    #+#             */
/*   Updated: 2021/12/01 12:53:16 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main() {

	DiamondTrap		nico("Nico");

	std::cout << std::endl;

	nico.attack("Adam");
	nico.takeDamage(3);
	nico.beRepaired(3);
	nico.guardGate();
	nico.highFivesGuys();
	nico.whoAmI();

	std::cout << std::endl;
	return (0);
}
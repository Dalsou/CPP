/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 11:08:40 by afoulqui          #+#    #+#             */
/*   Updated: 2021/08/12 12:11:10 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int main() {

	ClapTrap	nice("Nice");

	nice.attack("Bad");
	nice.takeDamage(3);
	nice.beRepaired(2);
	nice.attack("Very Bad");
	nice.takeDamage(10);
	return (0);
}
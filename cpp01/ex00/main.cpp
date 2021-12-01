/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 16:57:10 by afoulqui          #+#    #+#             */
/*   Updated: 2021/11/25 12:02:24 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie	*manu = new Zombie("Manu");
	Zombie	*dorian = new Zombie("Dorian");

	std::cout << std::endl;

	Zombie	*natasha = newZombie("Natasha");
	Zombie	*roger = newZombie("Roger");

	std::cout << std::endl;

	randomChump("Francis");
	randomChump("Diego");
	randomChump("Vivienne");

	std::cout << std::endl;

	dorian->announce();
	manu->announce();
	natasha->announce();
	roger->announce();

	std::cout << std::endl;

	delete roger;
	delete natasha;
	delete dorian;
	delete manu;
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 16:57:10 by afoulqui          #+#    #+#             */
/*   Updated: 2021/07/01 17:28:27 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int	main()
{
	Zombie	*manu;
	Zombie	*dorian;

	randomChump("Francis");
	randomChump("Diego");
	manu = newZombie("Manu");
	randomChump("Vivienne");
	dorian = newZombie("Dorian");
	delete dorian;
	delete manu;
	return (0);
}
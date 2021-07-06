/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 18:06:50 by afoulqui          #+#    #+#             */
/*   Updated: 2021/07/01 18:43:38 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	int N = 12;
	Zombie*	horde;

	horde = zombieHorde(N, "Francis");
	for (int i = 0; i < N; i++) {
		horde[i].announce();
	}
	delete [] horde;
}
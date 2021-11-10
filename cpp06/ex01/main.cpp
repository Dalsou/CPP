/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 11:09:06 by afoulqui          #+#    #+#             */
/*   Updated: 2021/11/10 11:53:57 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.h"

int	main()
{
	Data data;
	Data *un;
	uintptr_t raw;

	data.n = 42;

	std::cout << "N: " << data.n << std::endl;

	raw = serialize(&data);
	std::cout << "Raw: " << raw << std::endl;

	un = deserialize(raw);
	std::cout << "Un: " << un->n << std::endl;
	
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 16:46:45 by afoulqui          #+#    #+#             */
/*   Updated: 2021/07/07 17:09:18 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Karen.hpp"

int	findLevel(std::string level_str, std::string Level[4])
{
	for (int i = 0; i < 4; i++) {
		if (level_str == Level[i])
			return (i);
	}
	return (-1);
}

int main(int argc, char **argv)
{
	Karen		karen;
	std::string	level_str = argv[1];
	std::string	Level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			i;

	if (argc != 2) {
		std::cout << "Wrong number of arguments.\n";
		return (1);
	}
	i = findLevel(level_str, Level);
	switch (i) {
		case (0) :
			std::cout << "[ DEBUG ]\n";
			karen.complain(Level[i]);
			break;
		case (1) :
			std::cout << "[ INFO ]\n";
			karen.complain(Level[i]);
			break;
		case (2) :
			std::cout << "[ WARNING ]\n";
			karen.complain(Level[i]);
			break;
		case (3) :
			std::cout << "[ ERROR ]\n";
			karen.complain(Level[i]);
			break;
		default :
			std::cout << "[ Probablement plainte de problèmes insignifiants ]\n";
	}
}
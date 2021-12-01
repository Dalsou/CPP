/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 16:46:45 by afoulqui          #+#    #+#             */
/*   Updated: 2021/11/30 13:42:20 by afoulqui         ###   ########.fr       */
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
	std::string	level_str;
	std::string	Level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			i;

	if (argc != 2)
	{
		std::cout << "Wrong number of arguments.\n";
		return (1);
	}
	level_str = argv[1];
	i = findLevel(level_str, Level);
	switch (i) {
		case (0) :
			karen.complain("DEBUG");
			std::cout << std::endl;
		case (1) :
			karen.complain("INFO");
			std::cout << std::endl;
		case (2) :
			karen.complain("WARNING");
			std::cout << std::endl;
		case (3) :
			karen.complain("ERROR");
			break;
		default :
			std::cout << "[ Probably complaining about insignificant problems ]\n";
	}
}
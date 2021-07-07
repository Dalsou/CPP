/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 16:42:36 by afoulqui          #+#    #+#             */
/*   Updated: 2021/07/07 17:11:05 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

typedef struct { std::string complain_level; void (Karen::*function)(void);} Complain;

Karen::Karen(void)
{}

void Karen::complain(std::string level)
{
	Complain	complain[4] = {
		{"DEBUG", &Karen::debug},
		{"INFO", &Karen::info},
		{"WARNING", &Karen::warning},
		{"ERROR", &Karen::error},
	};
	for (int i = 0; i < 4; i++) {
		if (complain[i].complain_level == level)
			(this->*complain[i].function)();
	}
}

void Karen::debug(void)
{
	std::cout << "J’aime avoir du bacon supplémentaire pour mon burger ";
	std::cout << "7XL-double-cheese-triple-pickle-special-ketchup. J’adore ça !\n";
}

void Karen::info(void)
{
	std::cout << "Je ne peux pas croire que l’ajout de bacon supplémentaire coûte plus cher.\n";
	std::cout << "Vous n’en mettez pas assez ! Si vous le faisiez, je n’aurais pas à le demander !\n";
}

void Karen::warning(void)
{
	std::cout << "Je pense que je mérite d’avoir du bacon supplémentaire gratuitement.\n";
 	std::cout << "Je viens ici depuis des années et vous n’avez commencé à travailler ici que le mois dernier.\n";
}

void Karen::error(void)
{
	std::cout << "C’est inacceptable, je veux parler au responsable maintenant\n";
}

Karen::~Karen(void)
{}
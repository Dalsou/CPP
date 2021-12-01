/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 15:56:45 by afoulqui          #+#    #+#             */
/*   Updated: 2021/11/26 17:32:43 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

typedef struct { std::string complain_level; void (Karen::*function)(void);} Complain;

Karen::Karen(void)
{}

Karen::~Karen(void)
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
	std::cout << "[DEBUG]\n";
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!\n";
}

void Karen::info(void)
{
	std::cout << "[INFO]\n";
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!\n";
}

void Karen::warning(void)
{
	std::cout << "[WARNING]\n";
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month.\n";
}

void Karen::error(void)
{
	std::cout << "[ERROR]\n";
	std::cout << "This is unacceptable, I want to speak to the manager now.\n";
}
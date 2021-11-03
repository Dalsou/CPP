/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:25:32 by afoulqui          #+#    #+#             */
/*   Updated: 2021/11/03 14:40:37 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
	if (ac == 2)
	{
		ScalarConverter a(av[1]);
		std::cout << a;
	}
	else
		std::cout << "Wrong Arguments!\n";
}
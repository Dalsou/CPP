/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 11:32:51 by afoulqui          #+#    #+#             */
/*   Updated: 2021/11/17 11:44:38 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(void)
{
	char c[] = {'a', 'b', 'c', 'd', 'e', 'f'};
	::iter<char>(c, 6, ft_printf);

	std::cout << "\n ---- \n\n";

	std::string str[] = {"hello", "terve", "bonjour", "holla"};
	::iter<std::string>(str, 4, ft_printf);

	std::cout << "\n ---- \n\n";

	int num[] = {01, 99, -46, +224, -78, 89, +3, -779};
	::iter<int>(num, 8, ft_printf);

	std::cout << "\n ---- \n\n";

	float f[] = {0.10, 9.90, -0.46, +2.24, -0.078, 8.900008, +3.23, -779.896};
	::iter<float>(f, 8, ft_printf);

	return (0);
}
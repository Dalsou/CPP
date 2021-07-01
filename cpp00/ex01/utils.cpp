/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 15:37:24 by afoulqui          #+#    #+#             */
/*   Updated: 2021/06/25 17:13:03 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void	display(Contact contacts[8], int *count, int *i)
{
	int j;
	std::string entry;

	std::cout << "\n     INDEX| LAST NAME|FIRST NAME|  NICKNAME";
	std::cout << "\n-------------------------------------------\n";
	j = 0;
	while (j < *count)
	{
		contacts[j].display_index(j);
		j++;
	}
	std::cout << "\nChoose An Index : ";
	std::cin >> entry;
	*i = atoi(entry.c_str());
}

void	print_to_format(std::string str)
{
	int i;

	i = 0;
	if (str.size() > 10)
	{
		str = str.insert(9, ".");
		str = str.substr(0, 10);
	}
	else
	{
		i = 10 - str.size();
		while (i > 0)
		{
			str = str.insert(0, " ");
			i--;
		}
	}
	std::cout << str;
}

int	menu()
{	
	std::string	entry;

	std::cout << "\n::::::::::::::: PROGRAM MENU :::::::::::::::\n\n";
	std::cout << "                     ADD\n";
	std::cout << "                   SEARCH\n";
	std::cout << "                    EXIT\n\n";
	std::cout << "Enter Your Choice : ";
	std::cin >> entry;
	for (int i  = 0; i < 5; i++) {
		if (!entry.compare("ADD"))
			return (1);
		else if (!entry.compare("SEARCH"))
			return (2);
		else if (!entry.compare("EXIT"))
			return (3);
	}
	return (0);	
}
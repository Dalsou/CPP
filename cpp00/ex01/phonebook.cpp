/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 18:07:36 by afoulqui          #+#    #+#             */
/*   Updated: 2021/08/16 15:11:18 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void	search(Contact contacts[8], int *count)
{
	std::string entry;
	int			i;

	if (*count == 0)
	{
		std::cout << "\nYour Phonebook Is Empty !\n";
		std::cout << "Do You Want To Add A New Contact ? (YES - NO) : ";
		std::cin >> entry;
		if (!entry.compare("YES"))
			add(contacts, count);
		return ;
	}
	display(contacts, count, &i);
	if (i < 1 || i > *count)
		std::cout << "\nThere Are No Contact That Correspond To This Index\n";
	else
		contacts[i - 1].full_display();
}

void	add(Contact contacts[8], int *count)
{	
	int i;
	std::string entry;

	if ((*count) == 8)
	{
		std::cout << "\n\t*** MEMORY FULL ***\n\n";
		std::cout << "Do You Want To Remove A Contact ? (YES - NO) : ";
		std::cin >> entry;
		if (!entry.compare("YES"))
		{
			display(contacts, count, &i);
			if (i < 1 || i > *count)
			{
				std::cout << "\nThere Are No Contact That Correspond To This Index\n";
				return ;
			}
			else
			{
				contacts[i - 1].clear();
				std::cout << "\nContact Successfully Removed\n";
				contacts[i - 1].setup();
			}
		}
		else
			return ;	
	}
	else
	{
		contacts[(*count)].setup();
		(*count)++;
	}
	std::cout << "New Contact Successfully Added To Your Phonebook\n";
}

void	exit()
{
	std::cout << "\nGOODBYE !" << std::endl;
	exit(0);
}

int	main()
{
	int	choice;
	int count;
	Contact contacts[8];
	
	std::cout << "............................................\n";
    std::cout << "           PHONE BOOK MANAGEMENT\n";
    std::cout << "............................................\n\n";
	count = 0;
	while (1) 
	{
		choice = menu();
		if (choice == 1)
			add(contacts, &count);
		if (choice == 2)
			search(contacts, &count);
		if (choice == 3)
			exit();
	}
	return (0);
}

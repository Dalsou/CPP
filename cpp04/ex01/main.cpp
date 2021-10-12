/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 15:05:05 by afoulqui          #+#    #+#             */
/*   Updated: 2021/09/28 11:50:15 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main(void)
{
	// LEAK TEST
	{
		std::cout << "*** LEAK TEST ***\n";
		Animal *dog = new Dog();
		Animal *cat = new Cat();

		dog->makeSound();
		cat->makeSound();
		delete dog;
		delete cat;
	}
	// COPY TEST
	{
		std::cout << std::endl << "\n*** COPY TEST ***\n";
		Dog *dog = new Dog();
		Dog *dog2 = new Dog();

		*dog = *dog2;
		dog->makeSound();
		dog2->makeSound();
		delete dog;
		delete dog2;
	}
	// MULTIPLE TEST
	{
		Animal *animals[10];

		std::cout << std::endl << "\n*** MULTIPLE TEST ***\n";
		for (int i = 0; i < 5; i++)
			animals[i] = new Dog();
		for (int i = 5; i < 10; i++)
			animals[i] = new Cat();
		for (int i = 0; i < 10; i++)
			animals[i]->makeSound();
		for (int i = 0; i < 10; i++)
			delete animals[i];
	}
}
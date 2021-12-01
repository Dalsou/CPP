/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 15:05:05 by afoulqui          #+#    #+#             */
/*   Updated: 2021/12/01 16:40:34 by afoulqui         ###   ########.fr       */
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
		std::cout << "*** LEAK TEST ***\n\n";
		Animal *dog = new Dog();
		Animal *cat = new Cat();

		std::cout << std::endl;

		dog->makeSound();
		cat->makeSound();

		std::cout << std::endl;

		delete dog;
		delete cat;
	}
	// COPY TEST
	{
		std::cout << std::endl << "\n*** COPY TEST ***\n\n";
		Dog *dog = new Dog();
		Dog *dog2 = new Dog();

		std::cout << std::endl;

		*dog = *dog2;
		dog->makeSound();
		dog2->makeSound();

		std::cout << std::endl;

		delete dog;
		delete dog2;
	}
	// MULTIPLE TEST
	{
		Animal *animals[10];

		std::cout << std::endl << "\n*** MULTIPLE TEST ***\n\n";

		for (int i = 0; i < 5; i++)
			animals[i] = new Dog();

		std::cout << std::endl;

		for (int i = 5; i < 10; i++)
			animals[i] = new Cat();

		std::cout << std::endl;

		for (int i = 0; i < 10; i++)
			animals[i]->makeSound();

		std::cout << std::endl;
		
		for (int i = 0; i < 10; i++)
			delete animals[i];
	}
}
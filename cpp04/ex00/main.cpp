/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 17:33:46 by afoulqui          #+#    #+#             */
/*   Updated: 2021/12/01 16:20:42 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int		main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << std::endl;

	std::cout << j->getType() << std::endl;
	std::cout << i->getType() << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	std::cout << std::endl;

	const WrongAnimal* x = new WrongAnimal();
	const WrongAnimal* y = new WrongCat();

	std::cout << std::endl;

	std::cout << y->getType() << std::endl;
	y->makeSound();
	x->makeSound();

	std::cout << std::endl;

	delete meta;
	delete j;
	delete i;
	delete x;
	delete y;
}
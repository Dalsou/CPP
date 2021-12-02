/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 11:43:17 by afoulqui          #+#    #+#             */
/*   Updated: 2021/12/02 10:26:24 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat fabien("Fabien", 1);
	Bureaucrat corentin("Corentin", 150);
	
	std::cout << fabien;
	std::cout << corentin;

	std::cout << "\n*** Exception ***\n";

	try {
		fabien.incrementGrade();
	}

	catch (std::exception& ex) {
		std::cerr << ex.what() << std::endl;
	}

	try {
		corentin.decrementGrade();
	}

	catch (std::exception& ex) {
		std::cerr << ex.what() << std::endl;
	}

	std::cout << fabien;
	std::cout << corentin;

	std::cout << "\n*** Decrement & Increment ***\n";

	try {
		fabien.decrementGrade();
	}

	catch (std::exception& ex) {
		std::cerr << ex.what() << std::endl;
	}

	try {
		corentin.incrementGrade();
	}

	catch (std::exception& ex) {
		std::cerr << ex.what() << std::endl;
	}

	std::cout << fabien;
	std::cout << corentin;
}
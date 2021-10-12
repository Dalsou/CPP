/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 11:43:17 by afoulqui          #+#    #+#             */
/*   Updated: 2021/10/12 11:56:31 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat b1("Fabien", 1);
	Bureaucrat b2("Corentin", 150);
	
	std::cout << b1;
	std::cout << b2;

	std::cout << "\n*** Exception ***\n";

	try {
		b1.incrementGrade();
	}

	catch (std::exception& ex) {
		std::cerr << ex.what() << std::endl;
	}

	try {
		b2.decrementGrade();
	}

	catch (std::exception& ex) {
		std::cerr << ex.what() << std::endl;
	}

	std::cout << b1;
	std::cout << b2;

	std::cout << "\n*** Decrement & Increment ***\n";

	try {
		b1.decrementGrade();
	}

	catch (std::exception& ex) {
		std::cerr << ex.what() << std::endl;
	}

	try {
		b2.incrementGrade();
	}

	catch (std::exception& ex) {
		std::cerr << ex.what() << std::endl;
	}

	std::cout << b1;
	std::cout << b2;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 11:43:17 by afoulqui          #+#    #+#             */
/*   Updated: 2021/10/12 17:00:48 by afoulqui         ###   ########.fr       */
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

	std::cout << "\n*** Form ***\n\n";

	Form f1("Form 1", 5, 10);
	Form f2("Form 2", 50, 110);

	std::cout << f1;
	std::cout << std::endl;
	std::cout << f2;
	std::cout << std::endl;

	try {
		b1.signedForm(f1);
	}
	catch (std::exception& ex) {
		std::cerr << ex.what() << std::endl;
	}

	try {
		b2.signedForm(f2);
	}

	catch (std::exception& ex) {
		std::cerr << ex.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << f1;
	std::cout << std::endl;
	std::cout << f2;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 11:43:17 by afoulqui          #+#    #+#             */
/*   Updated: 2021/10/13 11:36:24 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	Bureaucrat b1("Fabien", 1);
	Bureaucrat b2("Corentin", 140);

	std::cout << "*** SHRUBBERY CREATION FORM ***\n\n";
	ShrubberyCreationForm	scf("House");
	b1.executeForm(scf);
	b2.signedForm(scf);
	b1.signedForm(scf);
	b2.executeForm(scf);
	b1.executeForm(scf);
	std::cout << std::endl;
	std::cout << scf;

	std::cout << "\n*** ROBOTOMY REQUEST FORM ***\n\n";
	RobotomyRequestForm	rrf("Blender");
	b1.executeForm(rrf);
	b2.signedForm(rrf);
	b1.signedForm(rrf);
	b2.executeForm(rrf);
	b1.executeForm(rrf);
	std::cout << std::endl;
	std::cout << rrf;

	std::cout << "\n*** PRESIDENTIAL PARDON FORM ***\n\n";
	PresidentialPardonForm	ppf("Nicolas");
	b1.executeForm(ppf);
	b2.signedForm(ppf);
	b1.signedForm(ppf);
	b2.executeForm(ppf);
	b1.executeForm(ppf);
	std::cout << std::endl;
	std::cout << ppf;
}
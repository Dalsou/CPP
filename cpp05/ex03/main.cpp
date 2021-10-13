/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 11:43:17 by afoulqui          #+#    #+#             */
/*   Updated: 2021/10/13 15:20:28 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main()
{
	Intern	intern;
	Form	*form;

	form = intern.makeForm("shrubbery creation", "house");
	std::cout << std::endl;
	form = intern.makeForm("robotomy request", "blender");
	std::cout << std::endl;
	form = intern.makeForm("presidential pardon", "Nicolas");
	std::cout << std::endl;
	try {
		form = form = intern.makeForm("raise", "Amelie");
	}
	catch(std::exception const & ex) {
		std::cerr << ex.what() << std::endl;
	}
}
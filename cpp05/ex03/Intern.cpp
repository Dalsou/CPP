/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 12:12:45 by afoulqui          #+#    #+#             */
/*   Updated: 2021/10/13 15:17:32 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

// Constructors & Destructor

Intern::Intern() {
	this->_form[0] = "shrubbery creation";
	this->_form[1] = "robotomy request";
	this->_form[2] = "presidential pardon";
}

Intern::~Intern() {}

Intern::Intern(const Intern& copy) {
	for (int i = 0; i < 3; i++)
		this->_form[i] = copy._form[i];
}

// Operator

Intern&	Intern::operator=(const Intern& op) {
	for (int i = 0; i < 3; i++)
		this->_form[i] = op._form[i];
	return (*this);
}

// Exception

const char* Intern::FormUnknowExeption::what() const throw() {
	return ("Error : form unknow");
}

// Function 

Form*	Intern::makeForm(std::string name, std::string target) {

	for (int i = 0; i < 3; i++)
	{
		if (name == this->_form[i])
		{
			std::cout << "Intern creates " << this->_form[i] << " for " << target << std::endl;
			return (this->createForm(i, target));
		}
	}
	throw FormUnknowExeption();
}

Form*	Intern::createForm(int i, std::string target) const {

	Form *form[3];
	Form *res;

	form[0] = new ShrubberyCreationForm(target);
	form[1] = new RobotomyRequestForm(target);
	form[2] = new PresidentialPardonForm(target);
	res = form[i];
	for (int i = 0; i < 3; i++)
		delete form[i];
	return (res);
}

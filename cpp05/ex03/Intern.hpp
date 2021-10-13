/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 11:46:42 by afoulqui          #+#    #+#             */
/*   Updated: 2021/10/13 15:16:05 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	private:
		std::string _form[3];

	public:
		// Constructors & Destructor
		Intern( void );
		~Intern( void );
		Intern(const Intern& copy);
		// Operator
		Intern& operator=(const Intern& op);
		// Exception
		class FormUnknowExeption: public std::exception {
			virtual const char* what() const throw();
		};
		// Function
		Form* makeForm(std::string name, std::string target);
		Form* createForm(int i, std::string target) const;
};

#endif
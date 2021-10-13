/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:44:49 by afoulqui          #+#    #+#             */
/*   Updated: 2021/10/13 11:34:56 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

// Constructors & destructor

PresidentialPardonForm::PresidentialPardonForm():
Form("Presidential Pardon Form", 25, 5),
_target("default") 
{}

PresidentialPardonForm::~PresidentialPardonForm()
{}

PresidentialPardonForm::PresidentialPardonForm(std::string target):
Form("Presidential Pardon Form", 25, 5),
_target(target)
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) {
	*this = copy;
}

// Operator

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& op)
{
	Form::operator=(op);
	return (*this);
}

// Function

void	PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
	Form::execute(executor);
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox.\n";
}
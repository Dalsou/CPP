/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:40:43 by afoulqui          #+#    #+#             */
/*   Updated: 2021/10/12 18:33:49 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

// Constructors & destructor

RobotomyRequestForm::RobotomyRequestForm():
Form("Robotomy Request Form", 72, 45),
_target("default") 
{}

RobotomyRequestForm::~RobotomyRequestForm()
{}

RobotomyRequestForm::RobotomyRequestForm(std::string target):
Form("Robotomy Request Form", 72, 45),
_target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) {
	*this = copy;
}

// Operator

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& op)
{
	Form::operator=(op);
	return (*this);
}

// Function

void	RobotomyRequestForm::execute(const Bureaucrat& executor) const 
{
	int	i;

	Form::execute(executor);
	std::cout << "BRRRRR ... BRRRRRR ... BRRRR ...\n";
	i = rand();
	if (i % 2)
		std::cout << this->_target << " has been robotomized successfully\n";
	else
		std::cout << this->_target << " has not been robotomized\n";
}
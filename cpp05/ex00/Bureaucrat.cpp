/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 11:23:41 by afoulqui          #+#    #+#             */
/*   Updated: 2021/10/12 11:43:14 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// Constructors & Destructor

Bureaucrat::Bureaucrat() : name("Default"), grade(150) {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string newName, int newGrade) :
name(newName),
grade(newGrade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) :
name(copy.name),
grade(copy.grade) 
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

// Operators

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& op)
{
	this->grade = op.grade;
	return (*this);
}

std::ostream&	operator<<(std::ostream &out, const Bureaucrat& i)
{
	out << i.getName() << ", bureaucrat grade " << i.getGrade() << std::endl;
	return (out);
}

// Getter Functions

const std::string &	Bureaucrat::getName() const {
	return (this->name);
}

int	Bureaucrat::getGrade() const {
	return (this->grade);
}

// Exceptions

char const *Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade is too high");
}

char const *Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade is too low");
}

// Functions

void	Bureaucrat::incrementGrade() {
	if (this->grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->grade--;
}

void	Bureaucrat::decrementGrade() {
	if (this->grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->grade++;
}
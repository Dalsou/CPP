/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 11:23:41 by afoulqui          #+#    #+#             */
/*   Updated: 2021/12/02 10:40:47 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// Constructors & Destructor

Bureaucrat::Bureaucrat() : _name("Default"), _grade(150) {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string name, int grade) :
_name(name),
_grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) :
_name(copy._name),
_grade(copy._grade) 
{
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

// Operators

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& op)
{
	this->_grade = op._grade;
	return (*this);
}

std::ostream&	operator<<(std::ostream &out, const Bureaucrat& i)
{
	out << i.getName() << ", bureaucrat grade " << i.getGrade() << std::endl;
	return (out);
}

// Getter Functions

const std::string &	Bureaucrat::getName() const {
	return (this->_name);
}

int	Bureaucrat::getGrade() const {
	return (this->_grade);
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
	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
}

void	Bureaucrat::decrementGrade() {
	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 11:23:41 by afoulqui          #+#    #+#             */
/*   Updated: 2021/10/13 11:11:40 by afoulqui         ###   ########.fr       */
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

void	Bureaucrat::signedForm(Form& form) const {
	if (form.isSigned())
		std::cout << form.getName() << " : already signed\n";
	else if (this->getGrade() > form.getGradeToSign())
		std::cout << form.getName() << " : grade is too low to signed\n";
	else
	{
		form.beSigned(*this);
		std::cout << form.getName() << " : signed by " << this->getName() << std::endl;
	}
}

void	Bureaucrat::executeForm(const Form& form)
{
	if (form.isSigned() == false)
		std::cout << this->name << " cannot execute " << form.getName() << " because it is unsigned\n";
	else if (form.getGradeToExecute() < this->grade)
		std::cout << this->name << " cannot execute " << form.getName() << " because his grade is too low\n";
	else
	{
		std::cout << this->name << " executes " << form.getName() << std::endl;
		form.execute(*this);
	}
}
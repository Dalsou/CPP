/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 12:21:32 by afoulqui          #+#    #+#             */
/*   Updated: 2021/12/02 13:24:35 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// Constructors & destructor

Form::Form() :
_name("Default"),
_signed(false),
_gradeToSign(1),
_gradeToExecute(1)
{}

Form::~Form() {}

Form::Form(const std::string name, const int gradeToSign, const int gradeToExecute) :
_name(name),
_gradeToSign(gradeToSign),
_gradeToExecute(gradeToExecute)
{
	this->_signed = false;
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw Form::GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form& copy) :
_name(copy._name),
_gradeToSign(copy._gradeToSign),
_gradeToExecute(copy._gradeToExecute)
{
	this->_signed = copy._signed;
	if (copy._gradeToSign < 1 || copy._gradeToExecute < 1)
		throw Form::GradeTooHighException();
	if (copy._gradeToSign > 150 || copy._gradeToExecute > 150)
		throw Form::GradeTooLowException();
}

// Operator

Form&	Form::operator=(const Form& op) {
	this->_signed = op._signed;
	return (*this);
}

std::ostream& operator<<(std::ostream& out, const Form& form) {
	out << "Name : " << form.getName() << std::endl;
	out << "Grade to sign : " << form.getGradeToSign() << std::endl;
	out << "Grade to execute : " << form.getGradeToExecute() << std::endl;
	out << "Signed : " << form.isSigned() << std::endl;
	return (out);
}

// Getter Functions

const std::string & Form::getName() const {
	return (this->_name);
}

int	Form::getGradeToSign() const {
	return (this->_gradeToSign);
}

int	Form::getGradeToExecute() const {
	return (this->_gradeToExecute);
}

std::string	Form::isSigned() const {
	if (this->_signed == true)
		return ("yes");
	return ("no");
}

// Exceptions

const char* Form::GradeTooHighException::what() const throw() {
	return ("Error : grade is too high");
}

const char* Form::GradeTooLowException::what() const throw() {
	return ("Error : grade is too low");
}

// Function

void	Form::beSigned(const Bureaucrat& bureaucrat) {
	if (bureaucrat.getGrade() > this->_gradeToSign)
		throw Form::GradeTooLowException();
	else
		this->_signed = true;
}
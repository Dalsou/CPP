/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 12:21:32 by afoulqui          #+#    #+#             */
/*   Updated: 2021/10/13 11:17:46 by afoulqui         ###   ########.fr       */
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
	if (form.isSigned() == 1)
		out << "Signed : yes\n";
	else
		out << "Signed : no\n";
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

bool	Form::isSigned() const {
	return (this->_signed);
}

// Exceptions

const char* Form::GradeTooHighException::what() const throw() {
	return ("Error : grade too high");
}

const char* Form::GradeTooLowException::what() const throw() {
	return ("Error : grade too low");
}

const char* Form::FormNotSignedException::what() const throw() {
	return ("Error : form not signed");
}

// Function

void	Form::beSigned(const Bureaucrat& bureaucrat) {
	if (bureaucrat.getGrade() > this->_gradeToSign)
		throw Form::GradeTooLowException();
	else
		this->_signed = true;
}

void	Form::execute(Bureaucrat const & executor) const {
	if (executor.getGrade() > this->_gradeToExecute)
		throw Form::GradeTooLowException();
	if (this->_signed == false)
		throw Form::FormNotSignedException();
	std::cout << executor.getName() << " execute " << this->_name << std::endl;
}
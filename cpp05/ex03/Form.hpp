/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 11:59:34 by afoulqui          #+#    #+#             */
/*   Updated: 2021/10/13 15:16:02 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

class Bureaucrat;
#include "Bureaucrat.hpp"

class Form {

	private :
		const std::string	_name;
		bool				_signed;
		const int			_gradeToSign;
		const int			_gradeToExecute;

	public :
		// Constrcutors & destructor
		Form( void );
		virtual ~Form( void );
		Form(const std::string name, const int gradeToSign, const int gradeToExecute);
		Form(const Form& copy);
		// Operator
		Form& operator=(const Form& op);
		// Getter Functions
		const std::string & getName( void ) const;
		int getGradeToSign( void ) const;
		int getGradeToExecute( void ) const;
		bool isSigned( void ) const;
		// Exceptions
		class GradeTooHighException: public std::exception {
			virtual const char* what() const throw();
		};
		class GradeTooLowException: public std::exception {
			virtual const char* what() const throw();
		};
		class FormNotSignedException: public std::exception {
			virtual const char* what() const throw();
		};
		// Function
		void beSigned(const Bureaucrat& bureaucrat);
		virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream&	operator<<(std::ostream& out, const Form& i);

#endif
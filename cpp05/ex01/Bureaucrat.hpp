/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:16:30 by afoulqui          #+#    #+#             */
/*   Updated: 2021/12/02 15:16:40 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Form;
#include "Form.hpp"

class	Bureaucrat {
	
	private:
		const std::string	_name;
		int					_grade;
	
	public:
		// Constructors & Destructor
		Bureaucrat(void);
		~Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat& copy);
		// Operator
		Bureaucrat &operator=(const Bureaucrat& op);
		// Getter Functions
		const std::string &	getName(void) const;
		int	getGrade(void) const;
		// Exception
		class	GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class	GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		// Functions
		void	incrementGrade(void);
		void	decrementGrade(void);
		void	signedForm(Form& form) const;
};

std::ostream&	operator<<(std::ostream& out, const Bureaucrat& i);

#endif
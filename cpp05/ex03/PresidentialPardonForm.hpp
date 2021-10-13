/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:42:36 by afoulqui          #+#    #+#             */
/*   Updated: 2021/10/12 17:44:24 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm : public Form {

	private:
		const std::string _target;

	public:
		//Constructors & destructor
		PresidentialPardonForm( void );
		~PresidentialPardonForm( void );
		PresidentialPardonForm(const std::string target);
		PresidentialPardonForm(const PresidentialPardonForm& copy);
		//Operator
		PresidentialPardonForm& operator=(const PresidentialPardonForm& op);
		//Action
		void execute(Bureaucrat const & executor) const;
};

#endif
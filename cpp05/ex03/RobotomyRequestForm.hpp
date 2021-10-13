/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:38:29 by afoulqui          #+#    #+#             */
/*   Updated: 2021/10/12 17:46:45 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "Form.hpp"

class RobotomyRequestForm : public Form {

	private:
		const std::string _target;

	public:
		//Constructors & destructor
		RobotomyRequestForm( void );
		~RobotomyRequestForm( void );
		RobotomyRequestForm(const std::string target);
		RobotomyRequestForm(const RobotomyRequestForm& copy);
		//Operator
		RobotomyRequestForm& operator=(const RobotomyRequestForm& op);
		//Action
		void execute(Bureaucrat const & executor) const;
};

#endif
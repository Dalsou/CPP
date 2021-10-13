/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:15:26 by afoulqui          #+#    #+#             */
/*   Updated: 2021/10/12 18:54:18 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

// Constructors & destructor

ShrubberyCreationForm::ShrubberyCreationForm():
Form("Shrubbery Creation Form", 145, 137),
_target("default") 
{}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
Form("Shrubbery Creation Form", 145, 137),
_target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) {
	*this = copy;
}

// Operator

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& op)
{
	Form::operator=(op);
	return (*this);
}

// Function

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
	std::ofstream outfile;
	outfile.open(("./" + this->_target + "_Shrubbery").c_str());

	for (int i = 0; i < 5; i++)
	{
		outfile << "     _\\/_     \n";
     	outfile << "      /\\      \n";
     	outfile << "      /\\      \n";
    	outfile << "     /  \\     \n";
    	outfile << "     /~~\\o    \n";
   		outfile << "    /o   \\    \n";
  		outfile << "   /~~*~~~\\   \n";
 		outfile << "  o/    o \\   \n";
 		outfile << "  /~~~~~~~~\\~`\n";
		outfile << " /__*_______\\ \n";
     	outfile << "      ||      \n";
		outfile << std::endl;  
	}
	outfile.close();
}
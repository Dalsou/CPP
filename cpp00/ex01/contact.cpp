/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 10:31:11 by afoulqui          #+#    #+#             */
/*   Updated: 2021/06/29 10:21:40 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void	Contact::fill(std::string str, std::string *attr)
{
	std::cout << str;
	std::cin >> *attr;
}

void	Contact::setup()
{
	std::cout << std::endl;
	fill("First Name     : ", &this->first_name);
	fill("Last Name      : ", &this->last_name);
	fill("Nickname       : ", &this->nickname);
	fill("Phone Number   : ", &this->phone_number);
	fill("Darkest Secret : ", &this->darkest_secret);
	std::cout << std::endl;
}

void	Contact::display_index(int i)
{
	std::cout << "         " << (i + 1) << "|";
	print_to_format(this->first_name);
	std::cout << "|";
	print_to_format(this->last_name);
	std::cout << "|";
	print_to_format(this->nickname);
	std::cout << std::endl;
}

void	Contact::full_display()
{
	std::cout << std::endl;
	std::cout << "First Name     : " << this->first_name << std::endl;
	std::cout << "Last Name      : " << this->last_name << std::endl;
	std::cout << "Nickname       : " << this->nickname << std::endl;
	std::cout << "Phone Number   : " << this->phone_number << std::endl;
	std::cout << "Darkest Secret : " << this->darkest_secret << std::endl;
	std::cout << std::endl;
}

void	Contact::clear()
{
	this->first_name.clear();
	this->last_name.clear();
	this->nickname.clear();
	this->phone_number.clear();
	this->darkest_secret.clear();
}
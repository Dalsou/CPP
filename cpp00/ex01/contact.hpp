/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 16:36:50 by afoulqui          #+#    #+#             */
/*   Updated: 2021/06/29 10:19:22 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact {

	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string	phone_number;
		std::string darkest_secret;

	public:
		void setup();
		void fill(std::string str, std::string *attr);
		void display_index(int i);
		void full_display();
		void clear();
};

int		menu();
void	exit();
void	add(Contact contacts[8], int *count);
void	search(Contact contacts[8], int *count);
void	print_to_format(std::string str);
void	display(Contact contacts[8], int *count, int *i);

#endif
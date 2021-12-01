/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 10:31:44 by afoulqui          #+#    #+#             */
/*   Updated: 2021/11/25 12:37:34 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;
	
	std::cout << "String address: " << &string << std::endl;
	std::cout << "String address using pointer: " << stringPTR << std::endl;
	std::cout << "String address using reference: " << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << "String using pointer: " << *stringPTR << std::endl;
	std::cout << "String using reference: " << stringREF << std::endl;

	return (0);
}
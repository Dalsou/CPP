/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 10:49:18 by afoulqui          #+#    #+#             */
/*   Updated: 2021/11/23 12:51:31 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
    //  VEC

    std::cout << "----- VECTOR -----\n\n";

	std::vector<int> vec;
	for (int i = 0; i < 42; i++)
		vec.push_back(i);
    vec.push_back(43);

	try {
		std::vector<int>::iterator it = easyfind(vec, 0);
		std::cout << "Found: " << *it << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::vector<int>::iterator it = easyfind(vec, 42);
		std::cout << "Found: " << *it << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
    try {
		std::vector<int>::iterator it = easyfind(vec, 43);
		std::cout << "Found: " << *it << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

    // LIST

    std::cout << "\n----- LIST -----\n\n";

	std::list<int> lst;
	for (int i = 0; i < 42; i++)
		lst.push_back(i);
    lst.push_back(43);

    try {
		std::list<int>::iterator it = easyfind(lst, 0);
		std::cout << "Found: " << *it << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
    try {
		std::list<int>::iterator it = easyfind(lst, 42);
		std::cout << "Found: " << *it << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
    try {
		std::list<int>::iterator it = easyfind(lst, 43);
		std::cout << "Found: " << *it << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

    return (0);
}
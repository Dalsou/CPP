/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 10:24:01 by afoulqui          #+#    #+#             */
/*   Updated: 2021/09/28 11:39:15 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// Constructors & Destructor

Brain::Brain(void) {
	std::cout << "Brain default constructor called\n";
}

Brain::~Brain(void) {
	std::cout << "Brain destructor called\n";
}

Brain::Brain(const Brain& copy) {
	*this = copy;
	std::cout << "Brain copy constructor called\n";
}

// Operator

Brain& Brain::operator=(const Brain& op) {
	for (int i = 0; i < 100; i++)
		this->ideas[i] = op.ideas[i];
	std::cout << "Brain copy operator called\n";
	return (*this);
}
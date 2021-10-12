/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 10:15:35 by afoulqui          #+#    #+#             */
/*   Updated: 2021/09/28 11:39:37 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {

	private:
		std::string ideas[100];

	public:
		// Constructors & Destructor
		Brain( void );
		~Brain( void );
		Brain(const Brain& copy);
		// Operator
		Brain& operator = (const Brain& op);
};

#endif
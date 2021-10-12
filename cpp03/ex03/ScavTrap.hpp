/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 12:18:58 by afoulqui          #+#    #+#             */
/*   Updated: 2021/08/12 17:52:23 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

	public:
		// Constructors & Destructor
		ScavTrap( void );
		~ScavTrap( void );
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& copy);
		// Operator
		ScavTrap& operator = (const ScavTrap& op);
		// Function
		void guardGate( void );
		void attack(std::string const & target);
};

#endif
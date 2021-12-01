/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 18:30:27 by afoulqui          #+#    #+#             */
/*   Updated: 2021/12/01 12:36:18 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {

	private:
		std::string	name;

	public:
		// Constructors & Destructor
		DiamondTrap( void );
		~DiamondTrap( void );
		DiamondTrap(const std::string& name);
		DiamondTrap(const DiamondTrap& copy);
		// Operator
		DiamondTrap& operator = (const DiamondTrap& op);
		//Function
		using ScavTrap::attack;
		void whoAmI(void) const;
};

#endif
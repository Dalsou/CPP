/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 11:08:45 by afoulqui          #+#    #+#             */
/*   Updated: 2021/08/12 10:58:50 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class	ClapTrap {

	private:
		std::string name;
		unsigned int hitPoints;
		unsigned int energyPoints;
		unsigned int attackDamage;

	public:
		// Constructors & Destructor
		ClapTrap( void );
		~ClapTrap( void );
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& copy);
		// Operator
		ClapTrap& operator = (const ClapTrap& op);
		// Setter & Getter Functions
		void setName(std::string newName);
		std::string getName( void ) const;
		unsigned int getHitPoints( void ) const;
		unsigned int getEnergyPoints( void ) const;
		unsigned int getAttackDamage( void ) const;
		// Action Functions 
		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

# endif
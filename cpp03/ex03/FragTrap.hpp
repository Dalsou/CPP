/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 18:09:08 by afoulqui          #+#    #+#             */
/*   Updated: 2021/12/01 12:23:25 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {

	public :
		// Constructors & Destructor
		FragTrap( void );
		~FragTrap( void );
		FragTrap(std::string name);
		FragTrap(FragTrap const& copy);
		// Operator
		FragTrap& operator = (const FragTrap& op);
		void highFivesGuys( void );
		void attack(std::string const & target);
};

#endif
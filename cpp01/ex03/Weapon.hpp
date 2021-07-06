/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 10:50:17 by afoulqui          #+#    #+#             */
/*   Updated: 2021/07/06 17:19:41 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {

	public:
		Weapon( void );
		Weapon(std::string first_type);
		const std::string& getType( void );
		void setType(std::string new_type);
		~Weapon( void );

	private:
		std::string type;
};

#endif
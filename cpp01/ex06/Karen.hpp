/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 16:42:09 by afoulqui          #+#    #+#             */
/*   Updated: 2021/07/07 16:42:12 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>

class	Karen {

	public:
		Karen( void );
		void	complain(std::string level);
		~Karen( void );

	private:
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
};

# endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:59:09 by afoulqui          #+#    #+#             */
/*   Updated: 2021/11/03 14:34:24 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <cmath>

class ScalarConverter {
	
	private:
		double _value;

	public:
		//Constructors & destructor
		ScalarConverter(void);
		~ScalarConverter(void);
		ScalarConverter(std::string const & value);
		ScalarConverter(const ScalarConverter& copy);
		//Operator
		ScalarConverter& operator=(const ScalarConverter& op);
		operator char(void) const;
		operator int(void) const;
		operator float(void) const;
		operator double(void) const;
		//Exception
		class ImpossibleException : public std::exception {
			char const *what() const throw();
		};
		//Functions
		static void	toChar(std::ostream& os, const ScalarConverter& op);
		static void	toInt(std::ostream& os, const ScalarConverter& op);
		static void	toFloat(std::ostream& os, const ScalarConverter& op);
		static void	toDouble(std::ostream& os, const ScalarConverter& op);
};

std::ostream	&operator<<(std::ostream &os, const ScalarConverter& op);

#endif
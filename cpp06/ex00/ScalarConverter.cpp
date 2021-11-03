/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:20:37 by afoulqui          #+#    #+#             */
/*   Updated: 2021/11/03 14:42:29 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

// Constructor & destructor

ScalarConverter::ScalarConverter() {}

ScalarConverter::~ScalarConverter() {}

ScalarConverter::ScalarConverter(std::string const & value) {
	_value = atof(value.c_str());
}

ScalarConverter::ScalarConverter(const ScalarConverter& copy) {
	*this = copy;
}

// Operator

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& op) {
	this->_value = op._value;
	return (*this);
}

ScalarConverter::operator char() const
{
	if (isnan(this->_value)
		|| this->_value < static_cast<double>(CHAR_MIN)
		|| this->_value > static_cast<double>(CHAR_MAX))
		throw ScalarConverter::ImpossibleException();
	return (static_cast<char>(this->_value));
}

ScalarConverter::operator int() const
{
	if (isnan(this->_value)
		|| this->_value < static_cast<double>(INT_MIN)
		|| this->_value > static_cast<double>(INT_MAX))
		throw ScalarConverter::ImpossibleException();
	return (static_cast<int>(this->_value));
}

ScalarConverter::operator float() const
{
	return (static_cast<float>(this->_value));
}

ScalarConverter::operator double() const
{
	return (static_cast<double>(this->_value));
}

std::ostream&	operator<<(std::ostream& os, const ScalarConverter& op)
{
	ScalarConverter::toChar(os, op);
	ScalarConverter::toInt(os, op);
	ScalarConverter::toFloat(os, op);
	ScalarConverter::toDouble(os, op);
	return (os);
}

// Exception

char const	*ScalarConverter::ImpossibleException::what() const throw() {
	return ("impossible");
}

// Functions

void	ScalarConverter::toChar(std::ostream& os, const ScalarConverter& op)
{
	try
	{
		char c = static_cast<char>(op);
		if (isprint(c))
			os << "char: '" << c << "'\n";
		else
			os << "char: non displayable\n";
	}
	catch(const std::exception& e)
	{
		os << "char: " << e.what() << '\n';
	}
}

void	ScalarConverter::toInt(std::ostream& os, const ScalarConverter& op)
{
	try
	{
		int i = static_cast<int>(op);
		os << "int: " << i << "\n";
	}
	catch(const std::exception& e)
	{
		os << "char: " << e.what() << '\n';
	}
}

void	ScalarConverter::toFloat(std::ostream& os, const ScalarConverter& op)
{
	float f = static_cast<float>(op);
	int	i = static_cast<int>(op);	

	os << "float: " << f;
	if (f - i == 0)
		os << ".0";
	os << "f\n";
}

void	ScalarConverter::toDouble(std::ostream& os, const ScalarConverter& op)
{
	double d = static_cast<double>(op);
	int	i = static_cast<int>(op);

	os << "double: " << d;
	if (d - i == 0)
		os << ".0";
	os << std::endl;
}
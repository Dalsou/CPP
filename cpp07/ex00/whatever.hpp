/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 11:06:42 by afoulqui          #+#    #+#             */
/*   Updated: 2021/11/17 11:20:29 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <string>
#include <iostream>

template <typename T>
void swap(T& a, T& b)
{
	T tmp;
	
	tmp = a;
	a = b;
	b = tmp; 
}

template <typename T>
T min(T const & a, T const & b)
{
	return (a >= b ? b : a);
}

template <typename T>
T max(T const & a, T const & b)
{
	return (a <= b ? b : a);
}

#endif
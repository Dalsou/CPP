/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 11:24:51 by afoulqui          #+#    #+#             */
/*   Updated: 2021/11/17 11:32:48 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <string>
#include <iostream>

template <typename T>
void iter(T* arr, int size, void(*f)(const T&))
{
	for (int i = 0; i < size; i++)
		f(arr[i]);
}

template <typename T>
void ft_printf(T a)
{
	std::cout << a << std::endl;
}

#endif
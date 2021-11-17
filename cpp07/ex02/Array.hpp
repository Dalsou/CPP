/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 11:47:02 by afoulqui          #+#    #+#             */
/*   Updated: 2021/11/17 17:21:07 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <string>
#include <iostream>

template <typename T>
class Array
{
	private:
		T* _array;
		unsigned int _size;

	public:
		// Constructor & Destructor
		Array(void) : _array(NULL), _size(0) {};
		~Array(void) {
			if (this->_array)
				delete [] this->_array;
		};
		Array(unsigned int n) {
			this->_array = new T[n];
			this->_size = n;
		};
		Array(Array const & copy) {
			this->_size = copy._size;
			this->_array = new T[this->_size];
			for (unsigned int i = 0; i < this->_size; i++)
				this->_array[i] = copy._array[i];
		};
		// Operator
		Array&	operator=(Array const & op) {
			if (this->_array)
				delete this->_array;
			this->_size = op._size;
			this->_array = new T[this->_size];
			for (unsigned int i = 0; i < this->_size; i++)
				this->_array[i] = op._array[i];
			return (*this);
		};
		T& operator[](unsigned int i) {
			if (i >= this->_size)
				throw std::exception();
			return (this->_array[i]);
		};
		// Getter Function 
		unsigned int size(void) {
			return (this->_size);
		};
};

#endif
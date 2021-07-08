/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 16:08:47 by afoulqui          #+#    #+#             */
/*   Updated: 2021/07/08 16:16:56 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef POINT_HPP
# define POINT_HPP

#include <iostream>
#include "Fixed.hpp"

class	Point {

	private:
		const Fixed x;
		const Fixed y;

	public:
		Point();
		Point(const Point& src);
		Point(const Fixed a, const Fixed b);
		Point& operator=(const Point& src);
		~Point();
};

# endif
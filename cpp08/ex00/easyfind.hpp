/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 09:37:58 by afoulqui          #+#    #+#             */
/*   Updated: 2021/11/23 12:31:29 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
#include <list>


class NotFoundException : public std::exception {
    public :
    char const *what() const throw() {
        return ("Value not found");
    }
};

template <typename T>
typename T::iterator easyfind(T& container, int value) {
    typename T::iterator it;

    it = std::find(container.begin(), container.end(), value);
    if (it == container.end())
        throw NotFoundException();
    return (it);
}

#endif
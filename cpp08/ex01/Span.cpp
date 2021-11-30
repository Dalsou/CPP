/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:28:38 by afoulqui          #+#    #+#             */
/*   Updated: 2021/11/24 13:50:08 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// Constructors & Destructor

Span::Span(void) {
    this->_N = 0;
    this->_array = std::vector<int>();
}

Span::~Span(void) {}

Span::Span(unsigned int N) {
    this->_N = N;
    this->_array = std::vector<int>();
}

Span::Span(const Span& copy) {
    this->_N = copy._N;
    this->_array = copy._array;
} 

// Operator

Span& Span::operator=(const Span& op) {
    this->_N = op._N;
    this->_array = op._array;
    return (*this);
}

// Exception

char const* Span::FullException::what() const throw() {
    return ("Full array");
}

char const* Span::NoShortestSpanException::what() const throw() {
    return ("No Shortest Span");
}

char const* Span::NoLongestSpanException::what() const throw() {
    return ("No Longest Span");
}

// Action function

void    Span::addNumber(int number) {

    if (this->_array.size() < this->_N)
        this->_array.push_back(number);
    else
        throw FullException();
}

int     Span::shortestSpan(void) {

    std::vector<int>    tmp;
    int span;

    if (this->_array.size() < 2)
        throw NoShortestSpanException();
    tmp = this->_array;
    std::sort(tmp.begin(), tmp.end());
    span = tmp[1] - tmp[0];
    for (unsigned int i = 0; i < tmp.size() - 1; i++)
    {
        if (span > tmp[1 + i] - tmp[i])
            span = tmp[1 + i] - tmp[i];
    }
    return (span);
}

int     Span::longestSpan(void) {

    std::vector<int>::const_iterator max;
    std::vector<int>::const_iterator min;

    if (this->_array.size() < 2)
        throw NoLongestSpanException();
    max = std::max_element(this->_array.begin(), this->_array.end());
    min = std::min_element(this->_array.begin(), this->_array.end());
    return (*max - *min);
}
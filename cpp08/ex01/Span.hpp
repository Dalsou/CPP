/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:08:10 by afoulqui          #+#    #+#             */
/*   Updated: 2021/11/24 13:44:14 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

class Span {

    private:
        unsigned int    _N;
        std::vector<int>  _array;

    public:
        //Constructor & Destructor
        Span(void);
        Span(unsigned int N);
        ~Span(void);
        Span(const Span& copy);
        //Operator
        Span& operator=(const Span& op);
        // Exception
        class FullException : public std::exception {
            public:
                char const* what() const throw();
        };
        class NoShortestSpanException : public std::exception {
            public:
                char const* what() const throw();
        };
        class NoLongestSpanException : public std::exception {
            public:
                char const* what() const throw();
        };
        // Action Function
        void addNumber(int number);
        int shortestSpan(void);
        int longestSpan(void);
};

#endif
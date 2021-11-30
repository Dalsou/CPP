/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:27:36 by afoulqui          #+#    #+#             */
/*   Updated: 2021/11/24 13:47:13 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    Span sp = Span(5);
    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    sp.addNumber(1);
    // std::cout << sp.shortestSpan() << std::endl;
    // std::cout << sp.longestSpan() << std::endl;

    // std::cout << "\n\n----------\n\n";

    // Span sp1 = Span(10);
    // for (int i = 0; i < 5; i++)
    //    sp1.addNumber(i);
    // for (int i = 42; i < 5; i++)
    //    sp1.addNumber(i);
    // sp1.addNumber(98);
    // sp1.addNumber(97);
    // sp1.addNumber(96);
    // std::cout << sp1.shortestSpan() << std::endl;
    // std::cout << sp1.longestSpan() << std::endl;
}
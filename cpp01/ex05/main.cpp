/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 15:56:37 by afoulqui          #+#    #+#             */
/*   Updated: 2021/07/07 16:39:52 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Karen.hpp"

int main()
{
	Karen karen;

	karen.complain("DEBUG");
	karen.complain("INFO");
	karen.complain("WARNING");
	karen.complain("ERROR");
	return 0;
}
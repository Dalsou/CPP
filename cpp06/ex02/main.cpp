/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoulqui <afoulqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:20:01 by afoulqui          #+#    #+#             */
/*   Updated: 2021/11/16 17:33:52 by afoulqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base*	generate()
{
	switch (rand() % 3)
	{
		case 0:
			return (new A());
		case 1:
			return (new B());
		case 2:
			return (new C());
	}
	return (NULL);
}

void	identify(Base* base)
{
	if (dynamic_cast<A*>(base))
		std::cout << "A\n";
	else if (dynamic_cast<B*>(base))
		std::cout << "B\n";
	else if (dynamic_cast<C*>(base))
		std::cout << "C\n";
	else
		std::cout << "Unknow\n";	
}

void	identify(Base &base)
{
	try
	{
		(void)dynamic_cast<A&>(base);
		std::cout << "A\n";
	}
	catch (const std::exception) {}
	try
	{
		(void)dynamic_cast<B&>(base);
		std::cout << "B\n";
	}
	catch (const std::exception) {}
	try
	{
		(void)dynamic_cast<C&>(base);
		std::cout << "C\n";
	}
	catch (const std::exception) {}
}

int	main()
{
	srand(time(NULL));
	Base *base = generate();
	identify(base);
	identify(*base);
	delete base;

	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 17:24:28 by inyang            #+#    #+#             */
/*   Updated: 2022/01/24 18:01:21 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "identify.hpp"

Base *	generate()
{
	srand(time(NULL));
	int i = rand() % 3;
	if (i == 0)
	{
		std::cout << "A\n";
		return (new A);
	}
	else if (i == 1)
	{
		std::cout << "B\n";
		return (new B);
	}
	else
	{
		std::cout << "C\n";
		return (new C);
	}
}

void	identify(Base* p)
{
	std::cout << "=== Pointer Identify ===\n";
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "Pointer A\n";
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "Pointer B\n";
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "Pointer C\n";
	else
		std::cerr << "This pointer is not A, B, C\n";
}

void	identify(Base& p)
{
	std::cout << "=== Reference Identify ===\n";
	Base	res;
	try
	{
		res = dynamic_cast<A&>(p);
		std::cout << "Reference A\n";
	}
	catch(const std::exception& e) {}
	try
	{
		res = dynamic_cast<B&>(p);
		std::cout << "Reference B\n";
	}
	catch(const std::exception& e) {}
	try
	{
		res = dynamic_cast<C&>(p);
		std::cout << "Reference C\n";
	}
	catch(const std::exception& e) {}
}
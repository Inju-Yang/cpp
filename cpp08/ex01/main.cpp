/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:29:40 by inyang            #+#    #+#             */
/*   Updated: 2022/01/27 16:57:51 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	try
	{
		std::cout << "Shortest span is : " << sp.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "Longest span is : " << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\n** insert 10000 elements test **\n" << std::endl;
	Span spBig = Span(10000);
	std::vector<int> vecBig;
	for (int i = 0; i < 10000; i++)
	{
		vecBig.push_back(rand());
	}
	spBig.addNumber(vecBig.begin(), vecBig.end(), vecBig.size());
	std::cout << "Shortest span is : " << spBig.shortestSpan() << std::endl;
	std::cout << "Longest span is : " << spBig.longestSpan() << std::endl;
	std::cout << "\n** insert over range elements test **\n" << std::endl;
	try
	{
		spBig.addNumber(1);
		std::cout << std::endl;
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0 ;
}
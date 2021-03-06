/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 00:38:10 by inyang            #+#    #+#             */
/*   Updated: 2022/01/22 17:24:37 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main ()
{
	Bureaucrat bu = Bureaucrat("highest", 0);
	Bureaucrat b = Bureaucrat("lowest", 150);

	std::cout << bu;
	bu.goHigher();
	std::cout << bu;
	bu.goLower();
	std::cout << bu;

	std::cout << "\n---------- lower test ----------\n";
	std::cout << b;
	b.goHigher();
	std::cout << b;
	b.goLower();
	std::cout << b;
	b.goLower();
	std::cout << b;

	return (0);
}
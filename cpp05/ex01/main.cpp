/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 00:38:10 by inyang            #+#    #+#             */
/*   Updated: 2022/01/21 01:59:55 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main ()
{
	Bureaucrat	smiley("Smiley", 151);
	Form		form("Form", 149, 1);

	std::cout << "-------------- check status ------------\n";
	std::cout << smiley;
	std::cout << form << std::endl;
	std::cout << "-------------- is signed? ------------\n\n";
	form.beSigned(smiley);
	smiley.signForm(form);
	smiley.goHigher();
	form.beSigned(smiley);
	smiley.signForm(form);
	std::cout << "\n-------------- check status ------------\n\n";
	std::cout << smiley;
	std::cout << form << std::endl;
	
	return (0);
}
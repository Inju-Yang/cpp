/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 00:38:10 by inyang            #+#    #+#             */
/*   Updated: 2022/01/21 22:36:15 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main ()
{
	Bureaucrat	smiley("Smiley", 50);
	ShrubberyCreationForm	sh("home");
	RobotomyRequestForm		ro("robot");
	PresidentialPardonForm	pr("mint-chocolate");

	std::cout << "-------------- check status ------------\n";
	std::cout << smiley;
	std::cout << sh << std::endl;
	std::cout << ro << std::endl;
	std::cout << pr << std::endl;
	std::cout << "-------------- is signed? ------------\n\n";
	sh.beSigned(smiley);
	smiley.executeForm(sh);
	ro.beSigned(smiley);
	smiley.executeForm(ro);
	pr.beSigned(smiley);
	smiley.executeForm(pr);
	
	return (0);
}
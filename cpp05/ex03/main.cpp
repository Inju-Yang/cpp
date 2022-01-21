/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 00:38:10 by inyang            #+#    #+#             */
/*   Updated: 2022/01/21 22:34:10 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main ()
{
	Intern	randomIn;
	Form*	rrf;
	Form* 	scf;
	Form*	ppf;
	Form*	wrongForm;

	std::cout << "-------------- check status ------------\n";
	rrf = randomIn.makeForm("robotomy request", "Bender");
	std::cout << *rrf;
	scf = randomIn.makeForm("shrubbery creation", "Alexander");
	std::cout << *scf;
	ppf = randomIn.makeForm("presidential pardon", "Chicken Tender");
	std::cout << *ppf;
	wrongForm = randomIn.makeForm("holy berry", "Render");

	std::cout << "\n-------------- invalid test ------------\n\n";
	Bureaucrat br("Mr. Jamspoon", 150);
	rrf->beSigned(br);
	br.executeForm(*rrf);
	scf->beSigned(br);
	br.executeForm(*scf);
	ppf->beSigned(br);
	br.executeForm(*ppf);
	
	std::cout << "\n-------------- valid test ------------\n\n";

	Bureaucrat	b("Mr.Teapot", 1);
	rrf->beSigned(b);
	b.executeForm(*rrf);
	scf->beSigned(b);
	b.executeForm(*scf);
	ppf->beSigned(b);
	b.executeForm(*ppf);

	return (0);
}
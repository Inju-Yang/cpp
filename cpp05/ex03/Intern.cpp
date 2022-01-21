/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 15:45:44 by inyang            #+#    #+#             */
/*   Updated: 2022/01/21 21:40:17 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {}

Intern::Intern(const Intern & obj)
{
	*this = obj;
}

Intern& Intern::operator=(const Intern & obj)
{
	(void) obj;
	return (*this);
}

Form*	Intern::makeForm(std::string form, std::string target)
{
    Form *ret;
    int idx;
	std::string	arr[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

	idx = 0;
	while (idx < 3)
	{
		if (form == arr[idx])
			break ;
		idx++;
	}
	switch (idx)
	{
		case 0:
            std::cout << "Intern creates < " << form << " >" << std::endl;
			ret = new ShrubberyCreationForm(target);
			break;
		case 1:
            std::cout << "Intern creates < " << form << " >" << std::endl;
			ret = new RobotomyRequestForm(target);
			break;
		case 2:
            std::cout << "Intern creates < " << form << " >" << std::endl;
			ret = new PresidentialPardonForm(target);
			break;
		default:
			std::cout << "Form doesn't exist." << std::endl;
			return (0);
	}
    return (ret);
}

Intern::~Intern() {}

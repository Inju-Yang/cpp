/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 02:11:11 by inyang            #+#    #+#             */
/*   Updated: 2022/01/21 22:37:48 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("Presidential Pardon", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Presidential Pardon", 25, 5)
{
	this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj) : Form("Presidential Pardon", 25, 5)
{
	this->target = obj.target;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& obj)
{
	if (this != &obj)
	{
		this->target = obj.getTarget();
		this->isSigned = obj.getIsSigned();
	}
	return (*this);
}
PresidentialPardonForm::~PresidentialPardonForm() {}

std::string PresidentialPardonForm::getTarget() const
{
	return (this->target);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->getIsSigned() == true)
	{
		if (this->execGrade < executor.getGrade())
		{
			std::cout << "Signed but can't execute -> ";
			throw Form::GradeTooLowException();
		}
		else
		{
			std::cout << "< " << target << " > has been pardoned by Zafod Beeblebrox\n";
		}
	}
	else
	{
		std::cout << "President says No\n";
		throw Form::NoSignedForm();
	}
}
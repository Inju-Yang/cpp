/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 02:11:16 by inyang            #+#    #+#             */
/*   Updated: 2022/01/21 22:37:53 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("Robotomy Request", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy Request", 72, 45)
{
	this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj) : Form("Robotomy Request", 72, 45)
{
	this->target = obj.target;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& obj)
{
	if (this != &obj)
	{
		this->target = obj.getTarget();
		this->isSigned = obj.getIsSigned();
	}
	return (*this);
}
RobotomyRequestForm::~RobotomyRequestForm() {}

std::string RobotomyRequestForm::getTarget() const
{
	return (this->target);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
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
			std::cout << "* Drrrrrrrrr... Drrrrrrrrrrrrrr....... *\n";
			std::cout << "< " << target << " > has been robotomized successfully 50% of the time\n";
		}
	}
	else
	{
		std::cout << "Robotomized failure\n";
		throw Form::NoSignedForm();
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 02:11:22 by inyang            #+#    #+#             */
/*   Updated: 2022/01/21 15:49:19 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shrubbery Creation", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrubbery Creation", 145, 137)
{
	this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj) : Form("Shrubbery Creation", 145, 137)
{
	this->target = obj.target;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj)
{
	if (this != &obj)
	{
		this->target = obj.getTarget();
		this->isSigned = obj.getIsSigned();
	}
	return (*this);
}
ShrubberyCreationForm::~ShrubberyCreationForm() {}

std::string ShrubberyCreationForm::getTarget() const
{
	return (this->target);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->getIsSigned() == true)
	{
		if (this->execGrade < executor.getGrade())
		{
			std::cout << "Signed but can't execute -> ";
			throw Form::GradeTooHighException();
		}
		else
		{
			std::ofstream outFile;
			outFile.open(this->target + "_shrubbery");
            outFile << "        t     " << std::endl;
            outFile << "       .#.     " << std::endl;
            outFile << "      .###.     " << std::endl;
            outFile << "     .#%##%.     " << std::endl;
            outFile << "    .%##%###.     " << std::endl;
            outFile << "   .##%###%##.     " << std::endl;
            outFile << "  .#%###%##%##.     " << std::endl;
            outFile << "        #     " << std::endl;
            outFile << "        #     " << std::endl;
            outFile.close();
		}
	}
	else
	{
		std::cout << "Go back and get signed\n";
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 00:39:27 by inyang            #+#    #+#             */
/*   Updated: 2022/01/21 03:22:13 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string Name, const int Sign, const int Exec) : name(Name), signGrade(Sign), execGrade(Exec)
{
	this->isSigned = false;
	try{
		if (Sign < 1 || Exec < 1)
			throw GradeTooHighException();
		if (Sign > 150 || Exec > 150)
			throw GradeTooLowException();
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}

Form::Form (const Form& obj) : name(obj.name), signGrade(obj.signGrade), execGrade(obj.execGrade)
{
	try{
		if (signGrade < 1 || execGrade < 1)
			throw GradeTooHighException();
		if (signGrade > 150 || execGrade > 150)
			throw GradeTooLowException();
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	*this = obj;
}

Form&	Form::operator=(const Form& obj)
{
	this->isSigned = obj.isSigned;
	return (*this);
}

Form::~Form() {}

std::string const Form::getName() const
{
	return (this->name);
}

bool	Form::getIsSigned() const
{
	return (this->isSigned);
}

int		Form::getExecGrade() const
{
	return (this->execGrade);
}

int		Form::getSignGrade() const
{
	return (this->signGrade);
}

void	Form::beSigned(const Bureaucrat& b)
{
	try {
		if (b.getGrade() > signGrade)
		{
			std::cout << "Bureaucrat -> ";
			throw GradeTooLowException();
		}
		this->isSigned = true;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
}

std::ostream& operator<<(std::ostream& out, const Form& obj)
{
	out << "< " << obj.getName() << " >" << std::endl;
	out << "Sign grade : " << obj.getSignGrade() << std::endl;
	out << "Exec grade : " << obj.getExecGrade() << std::endl;
	out << "Signed     : " << obj.getIsSigned() << std::endl;
	return (out);
}
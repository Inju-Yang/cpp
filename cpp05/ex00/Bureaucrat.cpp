/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 00:38:05 by inyang            #+#    #+#             */
/*   Updated: 2022/01/20 21:21:16 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){}
	
Bureaucrat::Bureaucrat(const std::string Name, int Grade) : name(Name)
{
	try{
		if (Grade < 1)
			throw GradeTooHighException();
	}
	catch (GradeTooHighException& e)
	{
		std::cout << e.what();
		Grade = 1;
	}
	try 
	{
		if (Grade > 150)
			throw GradeTooLowException();
	}
	catch (GradeTooLowException& e)
	{
		std::cout << e.what();
		Grade = 150;
	}
	grade = Grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj)
{
	*this = obj;
}
		
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj)
{
	this->grade = obj.grade;
	return (*this);
}
		
Bureaucrat::~Bureaucrat(){}

std::string Bureaucrat::getName() const
{
	return (this->name);
}

int			Bureaucrat::getGrade() const
{
	return (this->grade);
}

void	Bureaucrat::goHigher()
{
	this->grade--;
	try
	{
		if (this->grade < 1)
			throw(GradeTooHighException());
	}
	catch(GradeTooHighException& e)
	{
		std::cout << e.what();
		this->grade = 1;
	}
}
void	Bureaucrat::goLower()
{
	this->grade++;
	try
	{
		if (this->grade > 150)
			throw(GradeTooLowException());
	}
	catch(GradeTooLowException& e)
	{
		std::cout << e.what();
		this->grade = 150;
	}
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& obj)
{
	out << "< " << obj.getName() << " >, bureaucrat grade < " << obj.getGrade() << " >\n";
	return (out);
}
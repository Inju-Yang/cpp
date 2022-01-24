/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 00:38:05 by inyang            #+#    #+#             */
/*   Updated: 2022/01/23 00:52:58 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){}
	
Bureaucrat::Bureaucrat(const std::string Name, int Grade) : name(Name)
{
	grade = Grade;
	try{
		if (Grade < 1)
			throw GradeTooHighException();
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << " => Auto generated grade is [ 1 ]\n";
		this->grade = 1;
	}
	try 
	{
		if (Grade > 150)
			throw GradeTooLowException();
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << " => Auto generated grade is [ 150 ]\n";
		this->grade = 150;
	}
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
	std::cout << "Bureaucrat go upper!\n";
	this->grade--;
	try
	{
		if (this->grade < 1)
			throw(GradeTooHighException());
	}
	catch(GradeTooHighException& e)
	{
		std::cout << e.what() << " => Auto generated grade is [ 1 ]\n";
		this->grade = 1;
	}
}
void	Bureaucrat::goLower()
{
	std::cout << "Bureaucrat go lower!\n";
	this->grade++;
	try
	{
		if (this->grade > 150)
			throw(GradeTooLowException());
	}
	catch(GradeTooLowException& e)
	{
		std::cout << e.what() << " => Auto generated grade is [ 150 ]\n";
		this->grade = 150;
	}
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& obj)
{
	out << "< " << obj.getName() << " >, bureaucrat grade < " << obj.getGrade() << " >\n";
	return (out);
}
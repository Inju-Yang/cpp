/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 06:48:04 by inyang            #+#    #+#             */
/*   Updated: 2022/01/18 06:48:05 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "* WrongAnimal Default Constructor\n";
	this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const std::string& type)
{
	std::cout << "* WrongAnimal Constructor(type) : " << type << std::endl;
	this->type = type;
}
WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
	std::cout << "* WrongAnimal Copy Constructor\n";
	*this = copy;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& copy)
{
	std::cout << "* WrongAnimal Assignation Operator\n";
	this->type = copy.type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "* WrongAnimal Default Destructor\n";
}

std::string		WrongAnimal::getType(void) const
{
	return (this->type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "[!!!! WRONG !!!!]\n";
}
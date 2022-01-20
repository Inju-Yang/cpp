/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 06:48:10 by inyang            #+#    #+#             */
/*   Updated: 2022/01/20 01:03:49 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "* Dog Default Constructor\n";
	this->type = "Dog";
}

Dog::Dog(const std::string& type)
{
	std::cout << "* Dog Constructor(type) : " << type << std::endl;
	this->type = type;
}
Dog::Dog(const Dog& copy)
{
	std::cout << "* Dog Copy Constructor\n";
	*this = copy;
}

Dog& Dog::operator=(const Dog& copy)
{
	std::cout << "* Dog Assignation Operator\n";
	this->type = copy.type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "* Dog Default Destructor\n";
}

void	Dog::makeSound(void) const
{
	std::cout << "This is Dog sound : Wooooooooooff\n";
}
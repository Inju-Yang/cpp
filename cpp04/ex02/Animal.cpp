/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 06:48:13 by inyang            #+#    #+#             */
/*   Updated: 2022/01/20 06:27:09 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "* Animal Default Constructor\n";
	this->type = "Animal";
}

Animal::Animal(const Animal& copy)
{
	std::cout << "* Animal Copy Constructor\n";
	*this = copy;
}

Animal& Animal::operator=(const Animal& copy)
{
	this->type = copy.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "* Animal Default Destructor\n";
}

std::string		Animal::getType(void) const
{
	return (this->type);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 06:47:08 by inyang            #+#    #+#             */
/*   Updated: 2022/01/19 00:02:13 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "* Cat Default Constructor\n";
	this->type = "Cat";
}

Cat::Cat(const std::string& type)
{
	std::cout << "* Cat Constructor(type) : " << type << std::endl;
	this->type = type;
}
Cat::Cat(const Cat& copy)
{
	std::cout << "* Cat Copy Constructor\n";
	*this = copy;
}

Cat& Cat::operator=(const Cat& copy)
{
	std::cout << "* Cat Assignation Operator\n";
	this->type = copy.type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "* Cat Default Destructor\n";
}

void	Cat::makeSound(void) const
{
	std::cout << "This is Cat sound : Meeeeowwwwwwww\n";
}
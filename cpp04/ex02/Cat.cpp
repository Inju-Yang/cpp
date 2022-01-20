/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 06:47:08 by inyang            #+#    #+#             */
/*   Updated: 2022/01/20 06:24:13 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "* Cat Default Constructor : say Meow!\n";
	this->type = "Cat";
	catBrain = new Brain;
}

Cat::Cat(const Cat& copy)
{
	std::cout << "* Cat Copy Constructor : say Meow Meow!\n";
	*this = copy;
}

Cat& Cat::operator=(const Cat& copy)
{
	this->type = copy.type;
	catBrain = copy.catBrain;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "* Cat Default Destructor\n";
	delete catBrain;
}

void	Cat::makeSound(void) const
{
	std::cout << "This is Cat sound : Meeeeowwwwwwww\n";
}

std::string	Cat::getBrain(int index) const
{
	std::string tmp;
	tmp = this->catBrain->getIdea(index);
	return (tmp);
}

void	Cat::setBrain() const
{
	this->catBrain->setIdea();
}
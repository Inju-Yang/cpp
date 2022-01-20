/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 06:48:10 by inyang            #+#    #+#             */
/*   Updated: 2022/01/20 06:09:01 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "* Dog Default Constructor : say Woof!\n";
	this->type = "Dog";
	dogBrain = new Brain;
}

Dog::Dog(const Dog& copy)
{
	std::cout << "* Dog Copy Constructor : say Woof Woof!\n";
	*this = copy;
}

Dog& Dog::operator=(const Dog& copy)
{
	this->type = copy.type;
	this->dogBrain = new Brain(*copy.dogBrain);
	return (*this);
}

Dog::~Dog()
{
	std::cout << "* Dog Default Destructor\n";
	delete dogBrain;
}

void	Dog::makeSound(void) const
{
	std::cout << "This is Dog sound : Wwooooooooooff\n";
}

std::string	Dog::getBrain(int index) const
{
	std::string tmp;
	tmp = this->dogBrain->getIdea(index);
	return (tmp);
}

void	Dog::setBrain() const
{
	this->dogBrain->setIdea();
}


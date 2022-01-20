/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 00:09:10 by inyang            #+#    #+#             */
/*   Updated: 2022/01/19 00:15:16 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"


WrongCat::WrongCat()
{
	std::cout << "* WrongCat Default Constructor\n";
	this->type = "WrongCat";
}

WrongCat::WrongCat(const std::string& type)
{
	std::cout << "* WrongCat Constructor(type) : " << type << std::endl;
	this->type = type;
}
WrongCat::WrongCat(const WrongCat& copy)
{
	std::cout << "* WrongCat Copy Constructor\n";
	*this = copy;
}

WrongCat& WrongCat::operator=(const WrongCat& copy)
{
	std::cout << "* WrongCat Assignation Operator\n";
	this->type = copy.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "* WrongCat Default Destructor\n";
}

void	WrongCat::makeSound(void) const
{
	std::cout << "This is WrongCat sound : Meeeeowwwwwwww\n";
}
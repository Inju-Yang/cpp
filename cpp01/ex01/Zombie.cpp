/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 16:09:27 by inyang            #+#    #+#             */
/*   Updated: 2022/01/14 20:39:50 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	this->name = "Emily";
	std::cout << "Zombie " << name << " is dead!" << std::endl;
}
Zombie::Zombie(std::string name)
{
	this->name = name;
}

void	Zombie::announce(void)
{
	std::cout << "<" << name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << name << " is dead!" << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->name = name;
	announce();
}
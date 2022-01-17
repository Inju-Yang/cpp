/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 01:02:48 by inyang            #+#    #+#             */
/*   Updated: 2022/01/16 04:13:43 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "*** FragTrap Default Constructor ***\n";
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(std::string Name)
{
	std::cout << "*** FragTrap [ " << Name << " ] Constructor ***\n";
	this->name = Name;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}


FragTrap& FragTrap::operator=(const FragTrap& copy)
{
	std::cout << "*** FragTrap Assignation Operator ***\n";
	ClapTrap::operator=(copy);
	return *this;
}

FragTrap::FragTrap(const FragTrap& copy)
{
	std::cout << "*** FragTrap Copy Constructor ***\n";
	*this = copy;
}

FragTrap::~FragTrap()
{
	std::cout << "*** FragTrap [ " << name << " ] Destructor ***\n";
}

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap [ " << name << " ] wants to high five.\n";
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 05:21:59 by inyang            #+#    #+#             */
/*   Updated: 2022/01/16 04:07:00 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "*** ScavTrap Default Constructor ***\n";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(std::string Name)
{
	std::cout << "*** ScavTrap [ " << Name << " ] Constructor ***\n";
	this->name = Name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& copy)
{
	std::cout << "*** ScavTrap Copy Constructor ***\n";
	*this = copy;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& copy)
{
	std::cout << "*** ScavTrap Assignaton Operator ***\n";
	ClapTrap::operator=(copy);
	return *this;

}

ScavTrap::~ScavTrap()
{
	std::cout << "*** ScavTrap [ " << name << " ] Destructor ***\n";
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap [ " << name << " ] have enterred in Gate keeper mode.\n";
}
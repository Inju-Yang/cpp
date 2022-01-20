/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 05:21:59 by inyang            #+#    #+#             */
/*   Updated: 2022/01/18 07:21:47 by inyang           ###   ########.fr       */
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
	std::cout << "*** ScavTrap Constructor(name) ***\n";
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
	std::cout << "*** ScavTrap Destructor ***\n";
}

void ScavTrap::attack(std::string const & target)
{
	std::cout << "*** ScavTrap attacks [ " << target << " ]\n";
}

void ScavTrap::guardGate()
{
	std::cout << "*** ScavTrap [ " << name << " ] has enterred in Gate keeper mode.\n";
}
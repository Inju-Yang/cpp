/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 04:36:01 by inyang            #+#    #+#             */
/*   Updated: 2022/01/16 04:06:43 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "*** ClapTrap Default Constructor ***\n";
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "*** ClapTrap Constructor(name) ***\n";
	this->name = name;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	std::cout << "*** ClapTrap Copy Constructor ***\n";
	*this = copy;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& copy)
{
	std::cout << "*** ClapTrap Assignation Operator ***\n";
	this->name = copy.name;
	this->hitPoints = copy.hitPoints;
	this->energyPoints = copy.energyPoints;
	this->attackDamage = copy.attackDamage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "*** ClapTrap Destructor ***\n";
}

void ClapTrap::attack(std::string const & target)
{
	std::cout << "[ " << this->name << " ] attacks [ " << target << " ] causing >> " << this->attackDamage << " << points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "[ " << this->name << " ] took >> " << amount << " << damage!\n";
	this->hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "[ " << this->name << " ] healed for >> " << amount << " <<\n";
	this->hitPoints += amount;
}
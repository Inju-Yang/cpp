/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 04:16:27 by inyang            #+#    #+#             */
/*   Updated: 2022/01/17 15:10:03 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap()
{
	std::cout << "*** DiamondTrap Default Constructor ***\n";
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
}

DiamondTrap::DiamondTrap(std::string Name) : ClapTrap::ClapTrap(Name), ScavTrap::ScavTrap(Name), FragTrap::FragTrap(Name)
{
	std::cout << "*** DiamondTrap Constructor(name) ***\n";
	this->name = Name;
	ClapTrap::name = Name + "_clap_name";
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
}

void	DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << ">>>> DiamondTrap name [ " << this->name <<  " ]\n";
	std::cout << ">>>> ClapTrap name [ " << ClapTrap::name << " ]\n";
}
DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	*this = copy;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &copy)
{
	ClapTrap::operator=(copy);
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "*** DiamondTrap Destructor ***\n";
}
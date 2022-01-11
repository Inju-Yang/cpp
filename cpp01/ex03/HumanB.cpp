/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 00:12:11 by inyang            #+#    #+#             */
/*   Updated: 2022/01/07 02:19:42 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->club = NULL;
}

void	HumanB::setWeapon(Weapon &club)
{
	this->club = &club;
}

void	HumanB::attack(void)
{
	if (this->club == NULL)
		std::cout << name << " doesn't want unnecessary violence." << std::endl;
	else 
		std::cout << name << " attacks with this " << club->getType() << std::endl;
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 00:12:11 by inyang            #+#    #+#             */
/*   Updated: 2021/12/17 01:03:44 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


HumanA::HumanA(std::string name, Weapon& club)
{
	
}

void	HumanA::attack(void)
{
	std::cout << name << " attacks with his " << club.getType() << std::endl;
}

HumanA::~HumanA(void)

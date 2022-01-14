/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 00:12:11 by inyang            #+#    #+#             */
/*   Updated: 2022/01/14 20:49:39 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


HumanA::HumanA(std::string name, Weapon& club): name(name), weapon(club)
{
	// this->name = name;
}

void	HumanA::attack(void)
{
	std::cout << name << " attacks with his " << weapon.getType() << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 00:12:11 by inyang            #+#    #+#             */
/*   Updated: 2022/01/07 01:15:26 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->type = type;
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}

const std::string	&Weapon::getType(void)
{
	const std::string &club = type;
	return (club);
}
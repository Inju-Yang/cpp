/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 16:25:35 by inyang            #+#    #+#             */
/*   Updated: 2021/12/15 16:37:01 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie	*newZombie(std::string name)
{
	Zombie	*zzombie;
	zzombie = new Zombie(name);
	return (zzombie);
}
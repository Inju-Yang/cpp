/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 16:25:35 by inyang            #+#    #+#             */
/*   Updated: 2021/12/15 18:09:41 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie *zzombie;
	std::string m;
	zzombie = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		zzombie[i].setName(name);
	}
	return (zzombie);
}
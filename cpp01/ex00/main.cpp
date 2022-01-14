/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 16:28:48 by inyang            #+#    #+#             */
/*   Updated: 2022/01/14 21:23:47 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	// Zombie a = Zombie("a");
	Zombie a;
	a.announce();
	randomChump("b");
	Zombie* c = newZombie("c");
	c->announce();
	delete c;
}
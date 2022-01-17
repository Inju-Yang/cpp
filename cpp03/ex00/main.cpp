/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 04:36:09 by inyang            #+#    #+#             */
/*   Updated: 2022/01/15 05:18:36 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap ct("Smiley");
	ClapTrap ct2 = ct;

	ct.attack("doughnut");
	ct.takeDamage(20);
	ct.beRepaired(10);

	ct2.attack("cake");
	ct.takeDamage(50);
	ct.beRepaired(10);
	return (0);
}
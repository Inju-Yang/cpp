/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 04:36:09 by inyang            #+#    #+#             */
/*   Updated: 2022/01/16 04:10:48 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap ft("Smiley");
	FragTrap ft2 = ft;

	ft.attack("doughnut");
	ft.takeDamage(30);
	ft.beRepaired(50);
	ft.highFivesGuys();

	ft2.attack("cake");
	ft2.takeDamage(40);
	ft2.beRepaired(20);
	ft2.highFivesGuys();
	return (0);
}
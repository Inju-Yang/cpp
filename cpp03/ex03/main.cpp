/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 04:36:09 by inyang            #+#    #+#             */
/*   Updated: 2022/01/16 05:23:39 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap dt("Smiley");

	dt.attack("doughnut");
	dt.guardGate();
	dt.highFivesGuys();
	dt.whoAmI();
	return (0);
}
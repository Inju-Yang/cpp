/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 04:36:09 by inyang            #+#    #+#             */
/*   Updated: 2022/01/16 04:09:11 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap st("Smiley");
	ScavTrap st2 = st;

	st.attack("doughnut");
	st.takeDamage(30);
	st.beRepaired(50);
	st.guardGate();

	st2.attack("cake");
	st2.takeDamage(40);
	st2.beRepaired(20);
	st2.guardGate();

	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 04:32:13 by inyang            #+#    #+#             */
/*   Updated: 2022/01/25 00:46:46 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	private:
		std::string		name;
		unsigned int	hitPoints;
		unsigned int	attackDamage;
		unsigned int	energyPoints;	
	public:
		ClapTrap();
		ClapTrap(const std::string name);
		ClapTrap(const ClapTrap &copy);
		ClapTrap& operator=(const ClapTrap &copy);
		~ClapTrap();
		void	attack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif
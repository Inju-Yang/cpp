/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 16:05:48 by inyang            #+#    #+#             */
/*   Updated: 2022/01/07 04:21:48 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA {
	private:
		std::string	name;
		Weapon&		weapon;
	public:
		HumanA(std::string name, Weapon& club);
		void	attack(void);
};

#endif
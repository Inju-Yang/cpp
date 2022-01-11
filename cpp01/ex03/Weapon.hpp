/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 16:05:48 by inyang            #+#    #+#             */
/*   Updated: 2022/01/07 01:15:41 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon{
	private:
		std::string type;
	public:
		Weapon(std::string type);
		void				setType(std::string type);
		const std::string	&getType(void);
};

#endif
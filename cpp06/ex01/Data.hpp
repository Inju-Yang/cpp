/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 23:20:58 by inyang            #+#    #+#             */
/*   Updated: 2022/01/24 07:26:39 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	DATA_HPP
# define DATA_HPP

#include <iostream>

typedef	struct	Data 
{
	int			i;
	char		c;
	std::string	s;
}	Data;
uintptr_t	serialize(Data* ptr);
Data* 		deserialize(uintptr_t raw);

#endif
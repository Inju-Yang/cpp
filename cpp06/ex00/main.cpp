/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 23:05:41 by inyang            #+#    #+#             */
/*   Updated: 2022/01/24 15:48:49 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Needs one argument\n";
		return (0);
	}
	Conversion convert(av[1]);
	convert.convertType();
	return (0);
}
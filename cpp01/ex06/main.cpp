/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 16:28:48 by inyang            #+#    #+#             */
/*   Updated: 2022/01/12 04:20:50 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(int ac, char **av)
{
	Karen	k;
	if (ac != 2)
	{
		std::cout << "I can't handle this invalid complain!" << std::endl;
		return (0);
	}
	k.complain(av[1]);
	return (0);
}
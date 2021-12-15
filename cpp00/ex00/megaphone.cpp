/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 00:57:18 by inyang            #+#    #+#             */
/*   Updated: 2021/12/09 23:21:00 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <string>

int main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		int i = 0;
		while (++i < ac)
		{
			std::string str(av[i]);
			size_t j = -1;
			while (++j < str.size())
				std::cout << (char)std::toupper(str[j]);
		}
		std::cout << std::endl;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 16:28:48 by inyang            #+#    #+#             */
/*   Updated: 2021/12/19 23:23:35 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

void

int	main(int ac, char **av)
{
	if (ac != 4)
		std::cout << "Need 4 arguments" << std::endl;
	std::string file = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];
	std::ifstream file_in;
	std::ofstream file_out;

	file_in.open(file);
	if (file_in.fail())
	{
		std::cout << "Cannot open file" << std::endl;
		return (1);
	}

	file_out.open(av[1] + ".replace")
	std::cin >> s1;
	std::cin >> s2;
	return (0);
}
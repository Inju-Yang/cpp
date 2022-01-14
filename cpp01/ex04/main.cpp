/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 16:28:48 by inyang            #+#    #+#             */
/*   Updated: 2022/01/14 19:21:22 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Error: Count arguments again" << std::endl;
		return (1);
	}
	const std::string 	filename = av[1];
	const std::string 	s1 = av[2];
	const std::string 	s2 = av[3];
	if (filename.length() == 0 || s1.length() == 0 || s2.length() == 0)
	{
		std::cout << "Error: Blank arguments are prohibited" << std::endl;
		return (1);
	}

	std::ifstream	infile;
	std::ofstream	outfile;

	infile.open(filename);
	if (!infile.is_open())
	{
		std::cout << "Error: Cannot open file" << std::endl;
		return (1);
	}
	outfile.open(filename + ".replace");
	if (!outfile.is_open())
	{
		std::cout << "Error: Cannot make file" << std::endl;
		return (1);
	}

	std::string		line;
	while (std::getline(infile, line))
	{
		int index = 0;
		while (true)
		{
			index = line.find(s1, index);
			if (index == -1)
			{
				outfile << line;
				if (!infile.eof())
					outfile << "\n";
				break ;
			}
			else
			{
				line = line.insert(index, s2).erase(index + s2.length(), s1.length());
				index += s2.length();
			}
		}
	}
	return (0);
}
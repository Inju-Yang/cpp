/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 00:57:07 by inyang            #+#    #+#             */
/*   Updated: 2022/01/14 19:42:22 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void	Karen::debug(void)
{
	std::cout << "[DEBUG]\nI love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI just love it!" << std::endl;
}

void	Karen::info(void)
{
	std::cout << "[INFO]\nI cannot believe adding extra bacon cost more money.\nYou don’t put enough!\nIf you did I would not have to ask for it!" << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "[WARNING]\nI think I deserve to have some extra bacon for free.\nI’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::error(void)
{
	std::cout << "[ERROR]\nThis is unacceptable, I want to speak to the manager now." << std::endl;
}

int		levelDepth(std::string level, std::string *complainLevel)
{
	int i = 0;
	while (i < 4)
	{
		if (complainLevel[i] == level)
			break;
		else
			i++;
	}
	return (i);
}

void	Karen::complain(std::string level)
{
	void	(Karen::*funcs[4])() = {
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error
	};
	std::string	complainLevel[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	int i = levelDepth(level, complainLevel);
	if (i == 4)
	{
		std::cout << "[WRONG]\n... Karen says nothing." << std::endl;
		return ;
	}
	(this->*funcs[i])();
}
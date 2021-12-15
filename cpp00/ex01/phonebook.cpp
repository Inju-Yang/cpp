/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 01:18:10 by inyang            #+#    #+#             */
/*   Updated: 2021/12/15 01:37:55 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void Phonebook::addContact(int index)
{
	int idx = index - 1;
	std::cout << "\n>> Fill in these informations." << std::endl;
	std::cin.ignore();
	std::cout << "* First name is : ";
	getline(std::cin, firstName[idx]);
	std::cout << "* Last name is : ";
	getline(std::cin, lastName[idx]);
	std::cout << "* Nickname is : ";
	getline(std::cin, nickname[idx]);
	std::cout << "* Phone number is : ";
	getline(std::cin, phoneNumber[idx]);
	std::cout << "* Darkest secret is : ";
	getline(std::cin, darkestSecret[idx]);
}

void checkLength(std::string str)
{
	if (str.length() > 10)
		std::cout << str.substr(0, 9) << "." << "|";
	else
		std::cout << std::setw(10) << str << "|";
}

void Phonebook::printContact(int index)
{
	std::cout << "\n|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	for (int i = 0 ; i < index ; i++)
	{
		std::cout << "|";
		std::cout << std::setw(10) << i + 1 << "|";
		checkLength(firstName[i]);
		checkLength(lastName[i]);
		checkLength(nickname[i]);
		std::cout << std::endl;
	}
	std::cout << "|-------------------------------------------|" << std::endl;
}

void Phonebook::searchContact(int index)
{
	int	i;

	printContact(index);
	std::cout << "\n>> Press contact index : ";
	std::cin >> i;
	if (i <= index && i >= 1)
	{
		i -= 1;
		std::cout << "First name     : " << firstName[i] << std::endl;
		std::cout << "Last name      : " << lastName[i] << std::endl;
		std::cout << "Nickname       : " << nickname[i] << std::endl;
		std::cout << "Phone number   : " << phoneNumber[i] << std::endl;
		std::cout << "Darkest secret : " << darkestSecret[i] << std::endl;
	}
	else
	{
		std::cout << "*** Unavailable input. ***" << std::endl;
	}
	
}
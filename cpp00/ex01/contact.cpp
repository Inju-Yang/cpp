/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 20:44:39 by inyang            #+#    #+#             */
/*   Updated: 2022/01/05 18:13:41 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void Contact::addContact(void)
{
	std::cout << "\n>> Fill in these informations." << std::endl;
	std::cout << "* First name is : ";
	std::cin >> firstName;
	std::cout << "* Last name is : ";
	std::cin >> lastName;
	std::cout << "* Nickname is : ";
	std::cin >> nickname;
	std::cout << "* Phone number is : ";
	std::cin >> phoneNumber;
	std::cout << "* Darkest secret is : ";
	std::cin >> darkestSecret;
}

void checkLength(std::string str)
{
	if (str.length() > 10)
		std::cout << str.substr(0, 9) << "." << "|";
	else
		std::cout << std::setw(10) << str << "|";
}

void Contact::printContact(void)
{
	checkLength(firstName);
	checkLength(lastName);
	checkLength(nickname);
}

void Contact::searchContact(void)
{
	std::cout << "First name     : " << firstName << std::endl;
	std::cout << "Last name      : " << lastName << std::endl;
	std::cout << "Nickname       : " << nickname << std::endl;
	std::cout << "Phone number   : " << phoneNumber << std::endl;
	std::cout << "Darkest secret : " << darkestSecret << std::endl;
}
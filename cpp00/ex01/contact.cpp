/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 20:44:39 by inyang            #+#    #+#             */
/*   Updated: 2022/01/03 20:45:15 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void Contact::addContact(int index)
{
	int idx = index - 1;
	std::cout << "\n>> Fill in these informations." << std::endl;
	// std::cin.ignore(100, '\n');
	std::cout << "* First name is : ";
	std::cin >> firstName[idx];
	std::cout << "* Last name is : ";
	std::cin >> lastName[idx];
	std::cout << "* Nickname is : ";
	std::cin >> nickname[idx];
	std::cout << "* Phone number is : ";
	std::cin >> phoneNumber[idx];
	std::cout << "* Darkest secret is : ";
	std::cin >> darkestSecret[idx];
}

void checkLength(std::string str)
{
	if (str.length() > 10)
		std::cout << str.substr(0, 9) << "." << "|";
	else
		std::cout << std::setw(10) << str << "|";
}

void Contact::printContact(int index)
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

void Contact::searchContact(int index)
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
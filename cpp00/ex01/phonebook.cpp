/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 01:18:10 by inyang            #+#    #+#             */
/*   Updated: 2022/01/05 18:15:35 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void Phonebook::search(int cnt)
{
	std::cout << "\n|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	for (int i = 0 ; i < cnt ; i++)
	{
		std::cout << "|";
		std::cout << std::setw(10) << i + 1 << "|";
		page[i].printContact();
		std::cout << std::endl;
	}
	std::cout << "|-------------------------------------------|" << std::endl;
	
	int	idx;
	std::cout << "\n>> Press contact index : ";
	std::cin >> idx;
	if (idx <= cnt && idx >= 1)
	{
		idx -= 1;
		page[idx].searchContact();
	}
	else
	{
		std::cout << "*** Unavailable input. ***" << std::endl;
	}
}

void Phonebook::add(int cnt)
{
	page[cnt - 1].addContact();
}

int	main()
{
	int			cnt = 0;
	Phonebook	book;
	std::string option;

	std::cout << "************** PHONEBOOK **************" << std::endl;
	while (true)
	{
		std::cout << "\n>> Possible options -> ADD, SEARCH, EXIT ; ";
		std::cin >> option;
		if (option == "ADD")
		{
			cnt++;
			if (cnt <= 8)
				book.add(cnt);
			else
				book.add(cnt % 8);
		}
		else if (option == "SEARCH")
		{
			if (cnt <= 8)
				book.search(cnt);
			else
				book.search(8);
		}
		else if (option == "EXIT")
		{
			std::cout << "\n****** BYE ******" << std::endl;
			break ;
		}
		std::cin.clear();
		std::cin.ignore(100, '\n');
		option.clear();
		if (std::cin.eof())
		{
			return (0);
		}
	}
	return 0;
}
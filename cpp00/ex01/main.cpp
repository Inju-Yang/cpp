/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 18:33:54 by inyang            #+#    #+#             */
/*   Updated: 2021/12/15 01:39:24 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

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
				book.addContact(cnt);
			else
				book.addContact(cnt % 8);
		}
		else if (option == "SEARCH")
		{
			if (cnt <= 8)
				book.searchContact(cnt);
			else
				book.searchContact(8);
		}
		else if (option == "EXIT")
		{
			std::cout << "\n****** BYE ******" << std::endl;
			break ;
		}
	}
	return 0;
}
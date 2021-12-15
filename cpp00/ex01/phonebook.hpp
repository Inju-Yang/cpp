/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 01:16:15 by inyang            #+#    #+#             */
/*   Updated: 2021/12/15 01:29:52 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Phonebook {
	private: 
		std::string firstName[8];
		std::string lastName[8];
		std::string nickname[8];
		std::string phoneNumber[8];
		std::string darkestSecret[8];
	public:
		void addContact(int index);
		void searchContact(int index);
		void printContact(int index);
};

#endif
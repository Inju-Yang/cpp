/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 23:21:06 by inyang            #+#    #+#             */
/*   Updated: 2022/01/24 18:15:33 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int		main(void)
{
	Data* ptr = new Data;
	ptr->s = "Serialize test";
	ptr->i = 42;
	ptr->c = '*';

	std::cout << "ptr address	: " << ptr << std::endl;
	std::cout << "str data	: " << ptr->s << std::endl;
	std::cout << "int data	: " << ptr->i << std::endl;
	std::cout << "char data	: " << ptr->c << std::endl;
	
	uintptr_t	raw = serialize(ptr);
	std::cout << "serialized ptr address	: " << raw << std::endl;
	Data*	new_ptr = deserialize(raw);
	std::cout << "deserialized ptr address: " << new_ptr << std::endl;
	std::cout << "deserialized str data	: " << ptr->s << std::endl;
	std::cout << "deserialized int data	: " << ptr->i << std::endl;
	std::cout << "deserialized char data	: " << ptr->c << std::endl;
	delete ptr;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 16:28:48 by inyang            #+#    #+#             */
/*   Updated: 2022/01/14 20:45:08 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string		str = "HI THIS IS BRAIN";
	std::string		*ptr = &str;
	std::string&	ref = str;
	
	std::cout << "string : " << str << std::endl;
	std::cout << "string address: " << &str << std::endl;
	std::cout << std::endl;
	std::cout << "pointer: " << *ptr << std::endl;
	std::cout << "pointer address: " << ptr << std::endl;
	std::cout << std::endl;
	std::cout << "reference: " << ref << std::endl;
	std::cout << "reference address: " << &ref << std::endl;
}
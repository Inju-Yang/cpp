/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:33:00 by inyang            #+#    #+#             */
/*   Updated: 2022/01/27 08:38:41 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


   
#include "easyfind.hpp"
#include <vector>
#include <deque>
#include <list>

int main() {
	/* ******* Vector ******* */
	std::vector<int> vec;
	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);
	vec.push_back(40);
	vec.push_back(50);
	std::cout << "If Vector has value" << std::endl;
	try
	{
		std::cout << "easyfind(vec, 30): " << easyfind(vec, 30) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\nIf Vector doesn't have value" << std::endl;
	try
	{
		std::cout << "easyfind(vec, 42): " << easyfind(vec, 42) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	/* ******* Deque ******* */
	std::deque<int> deq;
	deq.push_back(10);
	deq.push_back(20);
	deq.push_back(30);
	deq.push_back(40);
	deq.push_back(50);
	std::cout << "If Deque has value" << std::endl;
	try
	{
		std::cout << "easyfind(deq, 30): " << easyfind(deq, 30) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\nIf Deque doesn't have value" << std::endl;
	try
	{
		std::cout << "easyfind(deq, 42): " << easyfind(deq, 42) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	/* ******* List ******* */
	std::list<int> lst;
	lst.push_back(10);
	lst.push_back(20);
	lst.push_back(30);
	lst.push_back(40);
	lst.push_back(50);
	std::cout << "If List has value" << std::endl;
	try
	{
		std::cout << "easyfind(lst, 30): " << easyfind(lst, 30) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\nIf List doesn't have value" << std::endl;
	try
	{
		std::cout << "easyfind(lst, 42): " << easyfind(lst, 42) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
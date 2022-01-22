/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 06:29:00 by inyang            #+#    #+#             */
/*   Updated: 2022/01/22 15:17:16 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	std::cout << "---------- Welcome NEW Animals ---------\n\n";
	Animal	*animal[4];
	for (int i = 0; i < 4; i++)
	{
		if (i % 2 == 0)
			animal[i] = new Dog();
		else
			animal[i] = new Cat();
	}
	std::cout << "\n------------ What does the DOG / CAT says-----------\n\n";
	for (int i = 0; i < 4; i++)
		animal[i]->makeSound();
	std::cout << "\n ------------ Bye Bye Animals ------------\n\n";
	for (int i = 0; i < 4; i++)
		delete animal[i];

	std::cout << "\n---------- Welcome NEW Animals ---------\n\n";
		Dog dog;
		Cat cat;	

		dog.makeSound();
		cat.makeSound();

	std::cout << "\n\n----------- Finish ----------\n";

	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 23:31:59 by inyang            #+#    #+#             */
/*   Updated: 2022/01/20 06:24:59 by inyang           ###   ########.fr       */
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
	std::cout << "------------ Bye Bye Animals ------------\n";
	for (int i = 0; i < 4; i++)
		delete animal[i];
	
	std::cout << "\n------------- Smart Doggy Test -------------\n\n";
	Dog	cuteDog;
	Dog deepDog = cuteDog;

	std::cout << "[cuteDog] : " << cuteDog.getBrain(3) << std::endl;
	std::cout << "[deepDog] : " << deepDog.getBrain(3) << std::endl;

	std::cout << "\nCute Dog starts thinking...\n";
	cuteDog.setBrain();

	std::cout << "[cuteDog] : " << cuteDog.getBrain(3) << std::endl;
	std::cout << "[deepDog] : " << deepDog.getBrain(3) << std::endl;

	std::cout << "\n\n----------- Finish ----------\n";

	system("leaks brain");
	return (0);
}
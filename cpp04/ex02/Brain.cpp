/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 00:22:02 by inyang            #+#    #+#             */
/*   Updated: 2022/01/20 06:08:42 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default Constructor\n";
	std::string	list[] = {
		"Grrrrrrr........",
		"Go away!",
		"Not that smart, huh?",
		"I'll bite you",
		"ENEMY!",
		"Watch out",
		"Don't touch"
	};

	for (int i = 0; i < 100; i++)
		ideas[i] = list[i % 7];
}

Brain::Brain(const Brain& copy)
{
	std::cout << "Brain Copy Constructor\n";
	*this = copy;
}

Brain& Brain::operator=(const Brain& copy)
{
	if (this != &copy)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = copy.ideas[i];
	}
	return (*this);
}
		
Brain::~Brain()
{
	std::cout << "Brain Destructor\n";
}

std::string	Brain::getIdea(int index)
{
	std::string tmp;
	tmp = ideas[index];
	return (tmp);
}

void	Brain::setIdea()
{
	std::string	list[] = {
		"I'm fancy",
		"I'm hungry",
		"I want to play",
		"Friend? Friend!",
		"Let's go for a walk",
		"HI!!!!!!!!!!!!",
		"Follow me"};
	
	for (int i = 0; i < 100; i++)
	{
		ideas[i] = list[i % 7];
	}
}
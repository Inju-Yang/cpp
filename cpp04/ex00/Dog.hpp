/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 06:55:26 by inyang            #+#    #+#             */
/*   Updated: 2022/01/19 00:02:09 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(const std::string& type);
		Dog(const Dog& copy);
		Dog& operator=(const Dog& copy);
		virtual ~Dog();
		virtual void makeSound(void) const;
};

#endif
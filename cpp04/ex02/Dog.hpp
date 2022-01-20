/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 06:55:26 by inyang            #+#    #+#             */
/*   Updated: 2022/01/20 06:07:42 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *dogBrain;
	public:
		Dog();
		Dog(const Dog& copy);
		Dog& operator=(const Dog& copy);
		virtual ~Dog();
		virtual void makeSound(void) const;
		std::string	getBrain(int index) const;
		void	setBrain() const;
};

#endif
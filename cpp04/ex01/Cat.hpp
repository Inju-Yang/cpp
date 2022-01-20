/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 06:51:47 by inyang            #+#    #+#             */
/*   Updated: 2022/01/20 06:13:21 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *catBrain;
	public:
		Cat();
		Cat(const std::string& type);
		Cat(const Cat& copy);
		Cat& operator=(const Cat& copy);
		virtual ~Cat();
		virtual void makeSound(void) const;
		std::string	getBrain(int index) const;
		void	setBrain() const;
};

#endif
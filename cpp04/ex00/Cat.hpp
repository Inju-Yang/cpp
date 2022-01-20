/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 06:51:47 by inyang            #+#    #+#             */
/*   Updated: 2022/01/19 00:02:18 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(const std::string& type);
		Cat(const Cat& copy);
		Cat& operator=(const Cat& copy);
		virtual ~Cat();
		virtual void makeSound(void) const;
};

#endif
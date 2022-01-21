/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 15:45:56 by inyang            #+#    #+#             */
/*   Updated: 2022/01/21 18:23:09 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"

class Intern
{
	private:
	public:
		Intern();
		Intern& operator=(const Intern & obj);
		Intern (const Intern & obj);
		~Intern();
		Form*	makeForm(std::string form, std::string target);
};

#endif
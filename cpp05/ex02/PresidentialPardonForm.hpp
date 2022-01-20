/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 02:11:14 by inyang            #+#    #+#             */
/*   Updated: 2022/01/21 04:06:18 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
		std::string target;
		PresidentialPardonForm();
	public:
		PresidentialPardonForm(const std::string target);
		PresidentialPardonForm(const PresidentialPardonForm& obj);
		PresidentialPardonForm& operator=(const PresidentialPardonForm& obj);
		~PresidentialPardonForm();
		std::string getTarget() const;
		virtual void execute(Bureaucrat const & executor) const;
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 00:39:25 by inyang            #+#    #+#             */
/*   Updated: 2022/01/21 01:37:24 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	name;
		const int signGrade;
		const int execGrade;
		bool	isSigned;
		Form();
	public:
		Form(std::string Name, int Sign, int Exec);
		Form (const Form& obj);
		Form& operator=(const Form& obj);
		~Form();
		std::string const getName() const;
		bool	getIsSigned() const;
		int		getExecGrade() const;
		int		getSignGrade() const;
		void	beSigned(Bureaucrat& b);
		
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw() {
					return "[Form] Too high grade"; };
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw() {
					return "[Form] Too low grade";};
		};
};
std::ostream& operator<<(std::ostream& out, const Form& obj);

#endif
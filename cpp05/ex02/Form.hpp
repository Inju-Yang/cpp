/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 00:39:25 by inyang            #+#    #+#             */
/*   Updated: 2022/01/21 22:34:03 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	protected:
		const std::string	name;
		const int signGrade;
		const int execGrade;
		bool	isSigned;
		Form();
	public:
		Form(std::string Name, int Sign, int Exec);
		Form (const Form& obj);
		Form& operator=(const Form& obj);
		virtual ~Form();
		std::string const getName() const;
		bool	getIsSigned() const;
		int		getExecGrade() const;
		int		getSignGrade() const;
		void	beSigned(const Bureaucrat& b);
		virtual void	execute(Bureaucrat const & executor) const = 0;
		
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
		class NoSignedForm : public std::exception
		{
			public:
				virtual const char* what() const throw() {
					return "Go back and get sign!";};
		};
};
std::ostream& operator<<(std::ostream& out, const Form& obj);

#endif
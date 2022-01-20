/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 00:38:08 by inyang            #+#    #+#             */
/*   Updated: 2022/01/21 01:39:57 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat
{
	private:
		const std::string	name;
		int	grade;
		Bureaucrat();
	public:
		Bureaucrat(const std::string Name, const int Grade);
		Bureaucrat(const Bureaucrat& obj);
		Bureaucrat& operator=(const Bureaucrat& obj);
		~Bureaucrat();

		std::string getName() const;
		int			getGrade() const;
		void	goHigher();
		void	goLower();

		class GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw() {
					return "Too high grade"; };
		};
		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw() {
					return "Too low grade";};
		};
};

std::ostream&	operator<<(std::ostream& out, const Bureaucrat& obj);

#endif
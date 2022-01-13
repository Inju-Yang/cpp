/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 16:15:45 by inyang            #+#    #+#             */
/*   Updated: 2022/01/14 04:08:59 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed {
	private : 
	int					fixValue;
	static const int	fracBits = 8;

	public :
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
	Fixed();
	Fixed(const Fixed& beFixed);
	Fixed(const int r);
	Fixed(const float f);
	~Fixed();
	Fixed&	operator=(Fixed const &beFixed);
	Fixed	operator*(Fixed const &beFixed) const;
	Fixed	operator+(Fixed const &beFixed) const;
	Fixed	operator-(Fixed const &beFixed) const;
	Fixed	operator/(Fixed const &beFixed) const;
	bool	operator>(Fixed const &beFixed) const;
	bool	operator<(Fixed const &beFixed) const;
	bool	operator>=(Fixed const &beFixed) const;
	bool	operator<=(Fixed const &beFixed) const;
	bool	operator==(Fixed const &beFixed) const;
	bool	operator!=(Fixed const &beFixed) const;
	Fixed	operator++(int);
	Fixed&	operator++();
	Fixed	operator--(int);
	Fixed&	operator--();
	static	Fixed&	max(Fixed &a, Fixed &b);
	static	Fixed const &max(Fixed const &a, Fixed const &b);
	static 	Fixed&	min(Fixed &a, Fixed &b);
	static 	Fixed const &min(Fixed const &a, Fixed const &b);
};

std::ostream&	operator<<(std::ostream& out, const Fixed& fixed);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 02:12:27 by inyang            #+#    #+#             */
/*   Updated: 2022/01/13 02:24:02 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
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
	Fixed& operator=(const Fixed& beFixed);
	Fixed(const int r);
	Fixed(const float f);
	~Fixed();
};

std::ostream&	operator<<(std::ostream& out, const Fixed& fixed);

#endif
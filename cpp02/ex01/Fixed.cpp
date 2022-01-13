/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 02:12:34 by inyang            #+#    #+#             */
/*   Updated: 2022/01/14 03:24:21 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


int	Fixed::getRawBits(void) const
{
	return (this->fixValue);
}

void	Fixed::setRawBits(int const raw)
{
	this->fixValue = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->fixValue / (1 << this->fracBits));
}

int		Fixed::toInt(void) const
{
	return (this->fixValue >> this->fracBits);
}

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	this->setRawBits(0);
}

Fixed::Fixed(const Fixed& beFixed)
{
	std::cout << "Copy constructor called\n";
	*this = beFixed;
}

Fixed& Fixed::operator=(const Fixed& beFixed)
{
	std::cout << "Assignation operator called\n";
	this->setRawBits(beFixed.getRawBits());
	return (*this);
}

Fixed::Fixed(const int r)
{
	std::cout << "Int constructor called\n";
	this->setRawBits(r << this->fracBits);
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called\n";
	this->setRawBits(roundf(f * (1 << this->fracBits)));
}

Fixed::~Fixed() 
{
	std::cout << "Destructor called\n";
}

std::ostream&	operator<<(std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return (out);
}
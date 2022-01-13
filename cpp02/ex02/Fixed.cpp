/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 16:15:47 by inyang            #+#    #+#             */
/*   Updated: 2022/01/14 04:10:15 by inyang           ###   ########.fr       */
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
	this->setRawBits(0);
}

Fixed::Fixed(const Fixed& beFixed)
{
	*this = beFixed;
}

Fixed& Fixed::operator=(Fixed const &beFixed)
{
	setRawBits(beFixed.getRawBits());
	return (*this);
}

Fixed::Fixed(const int r)
{
	this->setRawBits(r << this->fracBits);
}

Fixed::Fixed(const float f)
{
	this->setRawBits(roundf(f * (1 << this->fracBits)));
}

Fixed::~Fixed(){}

std::ostream&	operator<<(std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return (out);
}

Fixed	Fixed::operator+(Fixed const &beFixed) const
{
	Fixed	ret = *this;
	int a = fixValue;
	int b = beFixed.getRawBits();
	ret.setRawBits(a + b);
	return (ret);
}

Fixed	Fixed::operator-(Fixed const &beFixed) const
{
	Fixed	ret = *this;
	int a = fixValue;
	int b = beFixed.getRawBits();
	ret.setRawBits(a - b);
	return (ret);
}

Fixed	Fixed::operator*(Fixed const &beFixed) const
{
	Fixed	ret = *this;
	int a = fixValue;
	int b = beFixed.getRawBits();
	ret.setRawBits(a * b / (1 << fracBits));
	return (ret);
}

Fixed	Fixed::operator/(Fixed const &beFixed) const
{
	Fixed	ret = *this;
	int a = fixValue;
	int b = beFixed.getRawBits();
	ret.setRawBits((a / b) * (1 << fracBits));
	return (ret);
}

bool	Fixed::operator>(Fixed const &beFixed) const
{
	if (this->fixValue > beFixed.fixValue)
		return (true);
	return (false);
}

bool	Fixed::operator<(Fixed const &beFixed) const
{
	if (this->fixValue < beFixed.fixValue)
		return (true);
	return (false);
}

bool	Fixed::operator>=(Fixed const &beFixed) const
{
	if (this->fixValue >= beFixed.fixValue)
		return (true);
	return (false);
}

bool	Fixed::operator<=(Fixed const &beFixed) const
{
	if (this->fixValue <= beFixed.fixValue)
		return (true);
	return (false);
}

bool	Fixed::operator==(Fixed const &beFixed) const
{
	if (this->fixValue == beFixed.fixValue)
		return (true);
	return (false);
}

bool	Fixed::operator!=(Fixed const &beFixed) const
{
	if (this->fixValue != beFixed.fixValue)
		return (true);
	return (false);
}

Fixed	Fixed::operator++(int)
{
	Fixed	a(*this);

	this->fixValue++;
	return (a);
}

Fixed&	Fixed::operator++()
{
	this->fixValue++;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	a(*this);

	this->fixValue--;
	return (a);
}

Fixed&	Fixed::operator--()
{
	this->fixValue--;
	return (*this);
}

Fixed&	Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed	const &Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed&	Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed	const &Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a < b)
		return (a);
	return (b);
}
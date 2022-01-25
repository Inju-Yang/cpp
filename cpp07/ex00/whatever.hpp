/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 23:12:55 by inyang            #+#    #+#             */
/*   Updated: 2022/01/26 05:06:54 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T& a, T& b)
{
	T	tmp;
	tmp = a;
	a = b;
	b = tmp;
	return ;
}

template <typename T>
T	min(T a, T b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

template <typename T>
T	max(T a, T b)
{
	if (a > b)
		return (a);
	else
		return (b);
}


#endif
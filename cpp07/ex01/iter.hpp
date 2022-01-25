/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 23:51:00 by inyang            #+#    #+#             */
/*   Updated: 2022/01/26 05:53:08 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void	iter(T* arr, unsigned int size, void (*f)(T&))
{
	for (unsigned int i = 0; i < size; ++i)
		(*f)(arr[i]);
}

template <typename T>
void	printVal(T& iterated)
{
	std::cout << iterated << std::endl;
}

template <typename T>
void	increase(T& iterated)
{
	iterated++;
}

/**********************/

class Awesome
{
	private:
		int _n;
	public:
		Awesome( void ) : _n( 42 ) { return; }
		int get( void ) const { return this->_n; }
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { 
	o << rhs.get(); 
	return o;
}

template< typename T >
void print( T & x ) {
	std::cout << x << std::endl;
	return; 
}

#endif
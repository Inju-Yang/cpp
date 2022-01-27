/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 16:34:32 by inyang            #+#    #+#             */
/*   Updated: 2022/01/27 18:01:51 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() 
{
	return this->c.begin();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() 
{
	return this->c.end();
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const 
{
	return this->c.begin();
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end() const
{
	return this->c.end();
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin() 
{
	return this->c.rbegin();
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend() 
{
	return this->c.rend();
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rbegin() const
{
	return this->c.rbegin();
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rend() const
{
	return this->c.rend();
}
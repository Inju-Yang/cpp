/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:33:09 by inyang            #+#    #+#             */
/*   Updated: 2022/01/27 08:25:09 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
int easyfind(T& container, int i)
{
	typename T::iterator iter;
	iter = std::find(container.begin(), container.end(), i);
	if (iter == container.end())
		throw (std::out_of_range("** Error : Cannot find value\n"));
	return (*iter);
}

#endif
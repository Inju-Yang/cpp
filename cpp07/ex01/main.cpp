/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 23:50:45 by inyang            #+#    #+#             */
/*   Updated: 2022/01/26 00:05:09 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main ()
{
	char	arr1[4] = { 'a', 'b', 'c', 'd'};
	iter(arr1, 4, increase);
	iter(arr1, 4, printVal);

	unsigned int arr2[5] = { 10, 20, 30, 40, 50};
	iter(arr2, 5, increase);
	iter(arr2, 5, printVal);

	int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can’t write int[] tab. Wouldn’t that make more sense?
	Awesome tab2[5];
	iter( tab, 5, printVal );
	iter( tab2, 5, printVal );
	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 23:21:06 by inyang            #+#    #+#             */
/*   Updated: 2022/01/24 07:31:19 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main()
{
    Data data;
    uintptr_t	serializeValue;
    Data 		*deserializeValue;

    data.s = "hi";
    data.i = 9;
    data.c = 'a';

    serializeValue = serialize(&data);
    std::cout << "intptr		: " << serializeValue << std::endl;
    std::cout << "intptr hex	: " << std::hex << serializeValue << std::endl;

    deserializeValue = deserialize(serializeValue);
    std::cout << "str	: " << deserializeValue->s << std::endl;
    std::cout << "int	: " << deserializeValue->i << std::endl;
    std::cout << "char	: " << deserializeValue->c << std::endl;

    return (0);
}
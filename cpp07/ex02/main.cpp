/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 23:49:58 by inyang            #+#    #+#             */
/*   Updated: 2022/01/26 06:37:36 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#define MAX_VAL 10

int main(int, char**)
{
	Array<char> character;
    std::cout << "** Character size : " << character.size() << std::endl;
    Array<int> numbers(MAX_VAL);
    std::cout << "** Numbers size : " << numbers.size() << std::endl;

    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    std::cout << "\n** Set value in numbers & mirror" << std::endl;
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
	std::cout << "\n** Copy & operator constructor using deep copy\n";
    Array<int> tmp = numbers;
    Array<int> test(tmp);
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (test[i] != numbers[i])
        {
            std::cerr << "Not same value!" << std::endl;
            return 1;
        }
    }
	std::cout << "\n** Array range error throw-catch\n";
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	std::cout << "\n** Array < numbers > value reset\n";
    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
	std::cout << "\n** numbers vs mirror\n";
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "Not same value!" << std::endl;
        }
    }
	std::cout << "\n** numbers vs tmp\n";
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (tmp[i] != numbers[i])
        {
            std::cerr << "Not same value!" << std::endl;
        }
    }
	std::cout << "\n** tmp vs test\n";
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (tmp[i] != test[i])
        {
            std::cerr << "Not same value!" << std::endl;
        }
    }
    delete [] mirror;
	system("leaks array");
	return 0;
}
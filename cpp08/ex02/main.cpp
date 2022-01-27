/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:29:55 by inyang            #+#    #+#             */
/*   Updated: 2022/01/27 18:29:37 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include "mutantstack.cpp"
#include <list>

int main()
{
	std::cout << ">> MutantStack work <<\n";
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "MutantStack top : " <<  mstack.top() << std::endl;
	mstack.pop();
	std::cout << "MutantStack size : " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	std::cout << "MutantStack top : " << mstack.top() << std::endl;
	std::cout << "MutantStack size : " << mstack.size() << std::endl;
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	std::cout << "first element : " << *it << std::endl;
	++it;
	std::cout << "++iterator : " << *it << std::endl;
	--it;
	std::cout << "--iterator : " << *it << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}


	std::cout << "\n>> std::list work <<\n";
	std::list<int> lst;
	lst.push_back(5);
	lst.push_back(17);
	std::cout << "std::list top(back) : " <<  lst.back() << std::endl;
	lst.pop_back();
	std::cout << "std::list size : " << lst.size() << std::endl;
	lst.push_back(3);
	lst.push_back(5);
	lst.push_back(737);
	std::cout << "std::list top(back) : " << lst.back() << std::endl;
	std::cout << "std::list size : " << lst.size() << std::endl;
	lst.push_back(0);
	std::list<int>::iterator lst_it = lst.begin();
	std::list<int>::iterator lst_ite = lst.end();
	std::cout << "first element : " << *lst_it << std::endl;
	++lst_it;
	std::cout << "++iterator : " << *lst_it << std::endl;
	--lst_it;
	std::cout << "--iterator : " << *lst_it << std::endl;
	while (lst_it != lst_ite)
	{
		std::cout << *lst_it << std::endl;
		++lst_it;
	}

	std::cout << "\n>> MutantStack Reverse Iterator <<\n";
	MutantStack<int>::reverse_iterator rit = mstack.rbegin();
	MutantStack<int>::reverse_iterator rite = mstack.rend();
	std::cout << "MutantStack reverse iterator first : " << *rit << std::endl;
	std::cout << "MutantStack reverse iterator last : " << *(rite - 1) << std::endl;
	while (rit != rite)
	{
		std::cout << *rit << std::endl;
		++rit;
	}

	return 0;
}
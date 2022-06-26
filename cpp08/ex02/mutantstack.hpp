/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 16:33:56 by inyang            #+#    #+#             */
/*   Updated: 2022/06/26 18:28:38 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack();
		MutantStack(const MutantStack<T>& obj);
		MutantStack<T>& operator=(const MutantStack<T>& obj);
		virtual ~MutantStack();
		typedef typename std::stack<T>::container_type::iterator	iterator;
		iterator begin();
		iterator end();
		typedef typename std::stack<T>::container_type::const_iterator	const_iterator;
		const_iterator begin() const;
		const_iterator end() const;
		typedef typename std::stack<T>::container_type::reverse_iterator	reverse_iterator;
		reverse_iterator rbegin();
		reverse_iterator rend();
		typedef typename std::stack<T>::container_type::const_reverse_iterator	const_reverse_iterator;
		const_reverse_iterator rbegin() const;
		const_reverse_iterator rend() const;
};

#endif
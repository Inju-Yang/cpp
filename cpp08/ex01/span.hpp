/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 08:56:00 by inyang            #+#    #+#             */
/*   Updated: 2022/01/27 15:35:29 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
	private:
		unsigned int		vecSize;
		std::vector<int>	vec;
		Span();
	public:
		Span(unsigned int N);
		Span(const Span& obj);
		Span& operator=(const Span& obj);
		~Span();
		void	addNumber(int value);

		template <typename T>
		void addNumber(T begin, T end, unsigned int size)
		{
			unsigned int space = this->vecSize - this->vec.size();
			if (space >= size)
				this->vec.insert(this->vec.end(), begin, end);
			else
				throw(std::length_error("No more memory for new element"));
		}
		unsigned int shortestSpan();
		unsigned int longestSpan();
};

#endif
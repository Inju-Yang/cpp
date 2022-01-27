/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 08:56:26 by inyang            #+#    #+#             */
/*   Updated: 2022/01/27 18:24:42 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(){}
Span::Span(unsigned int N)
{
	this->vecSize = N;
	this->vec.reserve(N);
}
Span::Span(const Span& obj)
{
	*this = obj;
}
Span&	Span::operator=(const Span& obj)
{
	this->vecSize = obj.vecSize;
	this->vec.clear();
	this->vec = obj.vec;
	return (*this);
}
Span::~Span()
{
	this->vec.clear();
}

void	Span::addNumber(int value)
{
	if (vecSize - vec.size() == 0)
		throw(std::length_error("No more memory for new element"));
	this->vec.push_back(value);
}

unsigned int		Span::longestSpan()
{
	if (vecSize < 2)
		throw(std::length_error("Not enough elements to compare"));
	int max = *max_element(vec.begin(), vec.end());
	int min = *min_element(vec.begin(), vec.end());
	int ret = max - min;
	return (ret);
}

unsigned int		Span::shortestSpan()
{
	if (vecSize < 2)
		throw(std::length_error("Not enough elements to compare"));
	std::vector<int> tmp = this->vec;
	std::sort(tmp.begin(), tmp.end());
	int min = tmp.back() - tmp.front();
	std::vector<int>::iterator here = tmp.begin();
	std::vector<int>::iterator next = here + 1;
	while (next != tmp.end())
	{
		if (*next - *here < min)
			min = *next - *here;
		here++;
		next++;
	}
	return (min);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 00:06:45 by inyang            #+#    #+#             */
/*   Updated: 2022/01/26 06:11:00 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
	private:
		T*				arr;
		unsigned int	n;
	public:
		Array() { this->arr = new T[0], this->n = 0; }
		Array( unsigned int n ) { this->arr = new T[n], this->n = n; }
		Array(const Array& obj) {
			this->n = obj.n;
			this->arr = new T[this->n];
			for (unsigned int i = 0; i < n; i++)
				this->arr[i] = obj.arr[i];
		}
		Array& operator=(const Array& obj) {
			if (this != obj)
			{
				delete [] this->arr;
				this->n = obj.n;
				this->arr = new T[this->n];
				for (unsigned int i = 0; i < n; i++)
					this->arr[i] = obj.arr[i];
			}
			return (*this);
		}
		class outRange : public std::exception {
			public:
				virtual const char *what() const throw() {
					return "Index out of range";
				}
				virtual ~outRange() throw() {}
		};
		T&	operator[](unsigned long int i) {
			if (i >= this->n || i < 0)
				throw outRange();
			return (this->arr[i]);
		}
		unsigned int	size() const { return this->n; }
		~Array() { delete this->arr; }
};

#endif
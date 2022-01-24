/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 23:05:46 by inyang            #+#    #+#             */
/*   Updated: 2022/01/24 15:54:19 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
# define CONVERSION_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <cstring>

#define	IS_CHAR		0
#define	IS_INT		1
#define	IS_DOUBLE	2
#define	IS_FLOAT	3
#define	IS_F_IMPO	4
#define	IS_D_IMPO	5
#define	IS_ERROR	6

class Conversion
{
	private:
		char* input;
		std::string	impossible;
		Conversion();
	public:
		Conversion(char* input);
		Conversion(const Conversion& obj);
		Conversion& operator=(const Conversion& obj);
		~Conversion();
		char* getInput();
		std::string	getImpo();
		int	checktype();
		void	convertType();
		void	printFImpo();
		void	printDImpo();
		void	printInt(long i);
		void	printChar(char c);
		void	printFloat(float f);
		void	printDouble(double d);
};

#endif

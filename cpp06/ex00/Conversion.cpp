/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 23:05:44 by inyang            #+#    #+#             */
/*   Updated: 2022/01/24 15:52:06 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

Conversion::Conversion() {}

Conversion::Conversion(char* input)
{
	this->input = input;
}

Conversion::Conversion(const Conversion& obj)
{
	*this = obj;
}

Conversion& Conversion::operator=(const Conversion& obj)
{
	this->input = obj.input;
	return (*this);
}

Conversion::~Conversion() {}

char*	Conversion::getInput()
{
	return (this->input);
}

std::string	Conversion::getImpo()
{
	return (this->impossible);
}

int		Conversion::checktype()
{
	if (this->input == NULL)
		return (IS_ERROR);
	if (!strcmp(input, "nan") || !strcmp(input, "inf") || !strcmp(input, "+inf") || !strcmp(input, "-inf"))
	{
		impossible = input;
		return (IS_D_IMPO);
	}
	else if (!strcmp(input, "nanf") || !strcmp(input, "inff") || !strcmp(input, "+inff") || !strcmp(input, "-inff"))
	{
		impossible = input;
		return (IS_F_IMPO);
	}
	
	if (strlen(input) == 1 && !isdigit(input[0]))
		return IS_CHAR;
	else
	{
		int i = 0;
		if (input[i] == '+' || input[i] == '-')
		{
			if (input[i + 1] == '\0')
				return (IS_ERROR);
			i++;
		}
		while(isdigit(input[i]))
			i++;
		if (input[i] == '\0')
			return (IS_INT);
		if (input[i] == '.')
		{
			if (!isdigit(input[i + 1]))
				return (IS_ERROR);
			i++;
		}
		while (isdigit(input[i]))
			i++;
		if (input[i] == 'f' && input[i + 1] == '\0')
			return (IS_FLOAT);
		else if (input[i] == '\0')
			return (IS_DOUBLE);
	}
	return (IS_ERROR);
}

void	Conversion::printFImpo()
{
	std::cout << "char	:	impossible\n";
	std::cout << "int	:	impossible\n";
	std::cout << "float	:	" << this->getImpo() << std::endl;
	if (!strcmp(input, "nanf"))
		std::cout << "double	:	nan\n";
	else if (!strcmp(input, "inff"))
		std::cout << "double	:	inf\n";
	else if (!strcmp(input, "+inff"))
		std::cout << "double	:	+inf\n";
	else if (!strcmp(input, "-inff"))
		std::cout << "double	:	-inf\n";
}

void	Conversion::printDImpo()
{
	std::cout << "char	:	impossible\n";
	std::cout << "int	:	impossible\n";
	std::cout << "float:	:	" << this->getImpo() << "f" << std::endl;
	std::cout << "double	:	" << this->getImpo() << std::endl;
}

void	Conversion::printInt(long i)
{
	if (i > 2147483647 || i < -2147483648)
	{
		std::cout << "Error : Int range error\n";
		return ;
	}
	if (isprint(i) == 0)
		std::cout << "char	:	Non displayable\n";
	else
		std::cout << "char	:	'" << static_cast<char>(i) << "'\n";
	std::cout << "int	:	" << i << std::endl;
	std::cout << "float	:	" << static_cast<float>(i) << ".0f" << std::endl;
	std::cout << "double	:	" << static_cast<double>(i) << ".0" << std::endl;
}

void	Conversion::printChar(char c)
{
	if (isprint(c) == 0)
		std::cout << "char	:	Non displayable\n";
	else
		std::cout << "char	:	'" << c << "'\n";
	std::cout << "int	:	" << static_cast<int>(c) << std::endl;
	std::cout << "float	:	" << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "double	:	" << static_cast<double>(c) << ".0" << std::endl;
}

void	Conversion::printFloat(float f)
{
	if (isprint(f) == 0)
		std::cout << "char	:	Non displayable\n";
	else
		std::cout << "char	:	'" << static_cast<char>(f) << "'\n";
	std::cout << "int	:	" << static_cast<int>(f) << std::endl;
	if (f - static_cast<int>(f) == 0)
	{
		std::cout << "float	:	" << f << ".0f" << std::endl;
		std::cout << "double	:	" << static_cast<double>(f) << ".0" << std::endl;
	}
	else
	{
		std::cout << "float	:	" << f << "f" << std::endl;
		std::cout << "double	:	" << static_cast<double>(f) << std::endl;
	}
}

void	Conversion::printDouble(double d)
{
	if (isprint(d) == 0)
		std::cout << "char	:	Non displayable\n";
	else
		std::cout << "char	:	'" << static_cast<char>(d) << "'\n";
	std::cout << "int	:	" << static_cast<int>(d) << std::endl;
	if (d - static_cast<int>(d) == 0)
	{
		std::cout << "float	:	" << static_cast<float>(d) << ".0f" << std::endl;
		std::cout << "double	:	" << d << ".0" << std::endl;
	}
	else
	{
		std::cout << "float	:	" << static_cast<float>(d) << "f" << std::endl;
		std::cout << "double	:	" << d << std::endl;
	}
}

void	Conversion::convertType()
{
	int	type = checktype();

	if (type == IS_F_IMPO)
		printFImpo();
	else if (type == IS_D_IMPO)
		printDImpo();
	else if (type == IS_INT)
	{
		long i = atol(input);
		printInt(i);
	}
	else if (type == IS_CHAR)
	{
		char c = input[0];
		printChar(c);
	}
	else if (type == IS_FLOAT)
	{
		double d = atof(input);
		float f = static_cast<float>(d);
		printFloat(f);
	}
	else if (type == IS_DOUBLE)
	{
		double d = atof(input);
		printDouble(d);
	}
	else {
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : impossible" << std::endl;
		std::cout << "double : impossible" << std::endl;
	}

}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Para.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 17:12:16 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/14 09:53:32 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/my_define_include.hpp"

int		checkNombre(char *valeur)
{
	for (int x = 0; valeur[x]; x++)
	{
		if ((valeur[x] < '0' || valeur[x] > '9') && valeur[x] != '-'
		&& valeur[x] != '+' && valeur[x] != '.')
			return (-1);
	}
	return (1);
}

double		Para::atoi(std::string para)
{
	int x = 0;
	double res = 0;
	double op = 1;

	if (para[1] == '\0')
		return (static_cast<double>(para[0]));
	if (para[x] == '-')
	{
		op = -1;
		x++;	
	}
	while (para[x])
	{
		if (para[x] == '.')
		{
			x++;
			op *= 0.1;
			continue ;
		}
		res *= 10;
		res += static_cast<double>(para[x]) - '0';
		x++;
	}
	return (res * op);
}

Para::Para(char *valeur)
{
	int tmp = checkNombre(valeur);
	if ( tmp == -1 && (valeur[1] != '\0' || static_cast<int>(valeur[0]) > 127))
		throw (Para::badPara());
	this->_Double = this->atoi(valeur);
	this->_Float = static_cast<float>(this->_Double);
	this->_Int = static_cast<float>(this->_Double);
	if (tmp == 1 && (this->_Int > 127 || this->_Int < 1))
		this->_Char = '\0';
	else if (tmp != -1 && this->_Int <= 127 && this->_Int >= 1)
		this->_Char = static_cast<char>(this->_Int);
	else
		this->_Char = valeur[0];
}

Para::Para(Para &ori)
{
	if (this != &ori)
		*this = ori;
}

Para::~Para(void)
{}
char	Para::getChar(void)
{
	return (this->_Char);
}

int	Para::getInt(void)
{
	return (this->_Int);	
}

float	Para::getFloat(void)
{
	return (this->_Float);	
}

double	Para::getDouble(void)
{
	return (this->_Double);	
}


Para	&Para::operator=(Para &ori)
{
	if (this != &ori)
		*this = ori;
	return (*this);
}

const char * Para::badPara::what() const throw()
{
    return ("Parametre donner incorecte !");
}
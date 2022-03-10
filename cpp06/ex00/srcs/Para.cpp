/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Para.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 17:12:16 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/10 17:56:27 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/my_define_include.hpp"

int		checkNombre(char *valeur)
{
	for (int x = 0; valeur[x]; x++)
	{
		if ((valeur[x] < '0' || valeur[x] > '9') && valeur[x] != '-'
		&& valeur[x] != '+')
			return (-1);
	}
	return (1);
}

Para::Para(char *valeur)
{
	int tmp = checkNombre(valeur);
	if ( tmp == -1 && (valeur[1] != '\0' || static_cast<int>(valeur[0]) > 127))
		throw (/*caractere non coerant*/);
	*(this->_Int) = static_cast<int>(valeur[0]);
	if (tmp == -1 && this->_Int > 127 || this->_Int < 1)
		this->_Char = NULL;
	else
		*(this->_Char) = valeur[0];
	*(this->_Float) = static_cast<float>(this->_Int);
	*(this->_Double) = static_cast<double>(this->_Float);
}

Para::Para(Para &ori)
{
	if (this != &ori)
		*this = ori;
}

Para::~Para(void)
{}


Para	&Para::operator=(Para &ori)
{
	if (this != &ori)
		*this = ori;
	return (*this);
}



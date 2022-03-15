/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Para.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 17:12:16 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/15 10:27:11 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/my_define_include.hpp"

int	Para::ifChar(char *valeur)
{
	if (valeur[0] == '\'' && valeur[1] == '\'' && valeur[3] == '\0')
		return (1);
	return (0);
}

int	Para::ifNb(char *valeur)
{
	for (int i = 0; valeur[i] && valeur[i] != 'f' ; i++)
	{
		if (i == 0 && (valeur[i] == '+' || valeur[i] == '-'))
			continue ;
		if (valeur[i] != '.' && (valeur[i] < '0' || valeur[i] > '9'))
			return (0);
	}
	return (1);
}

Para::Para(char *valeur)
{
	if (this->ifChar(valeur) == 1)
		this->_Double = static_cast<double>(valeur[1]);
	else if (this->ifNb(valeur) == 1)
		this->_Double = atof(valeur);
}

Para::Para(Para &ori)
{
	if (this != &ori)
		*this = ori;
}

Para::~Para(void)
{}

int ajoueZero(double nb)
{
	int test = static_cast<int>(nb);
	if (nb - static_cast<double>(test) == 0)
		return (1);
	return (0);
}

void	Para::myPrint(void)
{
	if (this->_Double >= 32 && this->_Double <= 127)
		std::cout << VERT << "Char   : \'" << static_cast<char>(this->_Double) << "\'"<< BLANC << std::endl;
	else 
		std::cout << ROUGE << "Char   : non affichable..." << BLANC << std::endl;
	if (this->_Double <= 2147483647 && this->_Double >= -2147483648)
		std::cout << VERT << "Int    : " << static_cast<int>(this->_Double) << BLANC << std::endl;
	else 
		std::cout << ROUGE << "Int    : convertion impossible..." << BLANC << std::endl;
	if (ajoueZero(static_cast<float>(this->_Double)) == 1)
		std::cout << VERT << "Float  : " << static_cast<float>(this->_Double) << ".0f" << BLANC << std::endl;
	else
	std::cout << VERT << "Float  : " << static_cast<float>(this->_Double) <<  "f" << BLANC << std::endl;
	if (ajoueZero(this->_Double) == 1)
		std::cout << VERT << "Double : " << this->_Double << ".0" << BLANC << std::endl;
	else
		std::cout << VERT << "Double : " << this->_Double << BLANC << std::endl;
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
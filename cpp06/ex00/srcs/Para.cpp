/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Para.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 17:12:16 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/15 12:50:14 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/my_define_include.hpp"

Para::Para(char *valeur) : _inf(""), _inff(""), _type(0), _Double(0), _Float(0), _Int(0), _Char(0), _val(valeur)
{}

Para::Para(Para &ori)
{
	if (this != &ori)
		*this = ori;
}

Para::~Para(void)
{}

void		Para::takeType(void)
{
	int i;
	if (this->_val[0] == '\'' && this->_val[2] == '\'' && this->_val[3] == '\0')
	{
		this->_type = 1;
		return ;
	}
	if (this->_val != "-inf" && this->_val != "+inf" && this->_val != "inf" && this->_val != "nan" 
		&& this->_val != "-inff" && this->_val != "+inff" && this->_val != "inff" && this->_val != "nanf")
	{
		for (i = 0; this->_val[i]; i++)
		{
			if ((this->_val[i] == '-' || this->_val[i] == '+') && i == 0)
				continue ;
			if ((this->_val[i] < '0' || this->_val[i] > '9') && this->_val[i] != '.' && this->_val[i] != 'f')
			{
				this->_type = 0;
				return ;
			}
		}
	}
	for (i = 0; this->_val[i]; i++);
	if (this->_val[i - 1] == 'f')
	{
		this->_type = 3;
		return ;
	}
	for(int i = 0; this->_val[i]; i++)
	{
		if (this->_val[i] == '.' || this->_val == "-inf" || this->_val == "+inf" || this->_val == "inf" || this->_val == "nan")
		{
			this->_type = 4;
			return ;
		}
	}
	this->_type = 2;
}

int ajoueZero(double nb)
{
	int test = static_cast<int>(nb);
	if (nb - static_cast<double>(test) == 0)
		return (1);
	return (0);
}

void	Para::myPrint(void)
{
	if (this->_val == "-inff" || this->_val == "+inff" || this->_val == "inff" || this->_val == "nanf"
	|| this->_val == "-inf" || this->_val == "+inf" || this->_val == "inf" || this->_val == "nan")
	{
		if (this->_val == "-inff" && this->_val == "+inff" && this->_val == "inff" && this->_val == "nanf")
			this->_val[4] = '\0';
		this->_inf = this->_val;
		this->_inff = this->_val;
		this->_inff += "f";
		this->_val[4] = 'f';
	}
	this->takeType();
	if (this->_type == 1)
		this->printChar();
	else if (this->_type == 2)
		this->printInt();
	else if (this->_type == 3)
		this->printFloat();
	else if (this->_type == 4)
		this->printDouble();
	else if (this->_type == 0)
		throw (Para::badPara());
}

void	Para::printChar(void)
{
	this->_Char = static_cast<char>(this->_val[1]);
	std::cout << VERT << "Char   : \'" << this->_Char << "\'"<< BLANC << std::endl;
	std::cout << VERT << "Int    : " << static_cast<int>(this->_Char) << BLANC << std::endl;
	std::cout << VERT << "Float  : " << static_cast<float>(this->_Char) << ".0f" << BLANC << std::endl;
	std::cout << VERT << "Double : " << static_cast<double>(this->_Char) << ".0" << BLANC << std::endl;
}

void	Para::printInt(void)
{
	this->_Int = atoi(this->_val.c_str());
	if (this->_Int >= 32 && this->_Int <= 127)
		std::cout << VERT << "Char   : \'" << static_cast<char>(this->_Int) << "\'"<< BLANC << std::endl;
	else 
		std::cout << ROUGE << "Char   : non affichable..." << BLANC << std::endl;
	std::cout << VERT << "Int    : " << static_cast<int>(this->_Int) << BLANC << std::endl;
	std::cout << VERT << "Float  : " << static_cast<int>(this->_Int) << ".0f"<< BLANC << std::endl;
	std::cout << VERT << "Double : " << static_cast<double>(this->_Int) << ".0" << BLANC << std::endl;
}


void	Para::printFloat(void)
{
	this->_Float = atof(this->_val.c_str());
	if (this->_Float >= 32 && this->_Float <= 127)
		std::cout << VERT << "Char   : \'" << static_cast<char>(this->_Float) << "\'"<< BLANC << std::endl;
	else 
		std::cout << ROUGE << "Char   : non affichable..." << BLANC << std::endl;
	if (this->_inff == "" && this->_Float <= 2147483647 && this->_Float >= -2147483648)
		std::cout << VERT << "Int    : " << static_cast<int>(this->_Float) << BLANC << std::endl;
	else 
		std::cout << ROUGE << "Int    : convertion impossible..." << BLANC << std::endl;
	if (this->_inff != "")
		std::cout << JAUNE << "Float  : " << this->_inff << BLANC << std::endl;
	else if (ajoueZero(static_cast<double>(this->_Float)) != 1)
		std::cout << VERT << "Float  : " << this->_Float << BLANC << std::endl;
	else
		std::cout << VERT << "Float  : " << this->_Float << ".0f"<< BLANC << std::endl;
	if (this->_inf != "")
		std::cout << JAUNE << "Double  : " << this->_inf << BLANC << std::endl;
	else if (ajoueZero(this->_Float) != 1)
		std::cout << VERT << "Double : " << static_cast<double>(this->_Float) << BLANC << std::endl;
	else
		std::cout << VERT << "Double : " << static_cast<double>(this->_Float) << ".0" << BLANC << std::endl;
}

void	Para::printDouble(void)
{
	this->_Double = atof(this->_val.c_str());
	if (this->_Double >= 32 && this->_Double <= 127)
		std::cout << VERT << "Char   : \'" << static_cast<char>(this->_Double) << "\'"<< BLANC << std::endl;
	else 
		std::cout << ROUGE << "Char   : non affichable..." << BLANC << std::endl;
	if (this->_inff == "" && this->_Double <= 2147483647 && this->_Double >= -2147483648)
		std::cout << VERT << "Int    : " << static_cast<int>(this->_Double) << BLANC << std::endl;
	else 
		std::cout << ROUGE << "Int    : convertion impossible..." << BLANC << std::endl;
	if (this->_inff != "")
		std::cout << JAUNE << "Float  : " << this->_inff << BLANC << std::endl;
	else if (ajoueZero(static_cast<double>(this->_Double)) != 1)
		std::cout << VERT << "Float  : " << this->_Double << "f" << BLANC << std::endl;
	else
		std::cout << VERT << "Float  : " << this->_Double << ".0f"<< BLANC << std::endl;
	if (this->_inf != "")
		std::cout << JAUNE << "Double  : " << this->_inf << BLANC << std::endl;
	else if (ajoueZero(this->_Double) != 1)
		std::cout << VERT << "Double1 : " << static_cast<double>(this->_Double) << BLANC << std::endl;
	else
		std::cout << VERT << "Double : " << static_cast<double>(this->_Double) << ".0" << BLANC << std::endl;
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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Para.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 17:12:16 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/29 14:48:49 by mbonnet          ###   ########.fr       */
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
	char *c;
	double nb;
	
	nb = strtod(this->_val.c_str(), &c);
	if (c[0] == '\0' && nb >= -2147483648 && nb <= 2147483647)
		this->_type = 2;
	else if (c[0] == 'f')
		this->_type = 3;
	else if (c[0] == '\0')
		this->_type = 4;
	else if (c[0] >= 32 && nb == 0 && c[1] == '\0')
		this->_type = 1;
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
	if (this->_val == "-inff" || this->_val == "+inff" || this->_val == "inff" || this->_val == "nanf" || this->_val == "-nanf"
	|| this->_val == "-inf" || this->_val == "+inf" || this->_val == "inf" || this->_val == "nan" || this->_val == "-nan")
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
	this->_Char = static_cast<char>(this->_val[0]);
	std::cout << VERT << "Char   : \'" << this->_Char << "\'"<< BLANC << std::endl;
	std::cout << VERT << "Int    : " << static_cast<int>(this->_Char) << BLANC << std::endl;
	std::cout << VERT << "Float  : " << static_cast<float>(this->_Char) << ".0f" << BLANC << std::endl;
	std::cout << VERT << "Double : " << static_cast<double>(this->_Char) << ".0" << BLANC << std::endl;
}

void	Para::printInt(void)
{
	char *c;
	this->_Int = strtod(this->_val.c_str(), &c);
	if (this->_Int >= 32 && this->_Int <= 127)
		std::cout << VERT << "Char   : \'" << static_cast<char>(this->_Int) << "\'"<< BLANC << std::endl;
	else 
		std::cout << ROUGE << "Char   : non displayable..." << BLANC << std::endl;
	if (this->_Int <= 2147483647 && this->_Int >= -2147483648)
		std::cout << VERT << "Int    : " << static_cast<int>(this->_Int) << BLANC << std::endl;
	else
		std::cout << VERT << "Int    : overflow" << BLANC << std::endl;
	if (strtof("1000000000000000000000000000000000000000000000000000000", &c) == strtof(this->_val.c_str(), &c)
		|| strtof("-1000000000000000000000000000000000000000000000000000000", &c) == strtof(this->_val.c_str(), &c)
		|| strtof(this->_val.c_str(), &c) - static_cast<int>(this->_Int) > 0 || this->_val == "-inf" || this->_val == "inf"\
		|| this->_val == "-nanf" || this->_val == "-nan" || this->_val == "nan" || this->_val == "nanf")
		std::cout << VERT << "Float  : " << strtof(this->_val.c_str(), &c) << "f" << BLANC << std::endl;
	else
		std::cout << VERT << "Float  : " << strtof(this->_val.c_str(), &c) << ".0f" << BLANC << std::endl;	
	if (this->_val == "-inf"
	|| this->_val == "-nanf" || this->_val == "-nan" || this->_val == "nan" || this->_val == "nanf"
	|| this->_val == "inf" || this->_Int - static_cast<int>(this->_Int) > 0)
		std::cout << VERT << "Double : " << this->_Int << BLANC << std::endl;
	else
		std::cout << VERT << "Double : " << this->_Int << ".0" << BLANC << std::endl;
}


void	Para::printFloat(void)
{
	char *c;
	this->_Float = strtod(this->_val.c_str(), &c);
	if (this->_Float >= 32 && this->_Float <= 127)
		std::cout << VERT << "Char   : \'" << static_cast<char>(this->_Float) << "\'"<< BLANC << std::endl;
	else 
		std::cout << ROUGE << "Char   : non displayable..." << BLANC << std::endl;
	if (this->_Float <= 2147483647 && this->_Float >= -2147483648)
		std::cout << VERT << "Int    : " << static_cast<int>(this->_Float) << BLANC << std::endl;
	else
		std::cout << VERT << "Int    : overflow" << BLANC << std::endl; 
	if (strtof("1000000000000000000000000000000000000000000000000000000", &c) == strtof(this->_val.c_str(), &c)
		|| strtof("-1000000000000000000000000000000000000000000000000000000", &c) == strtof(this->_val.c_str(), &c)
		|| this->_Float - static_cast<int>(this->_Float) > 0 || this->_val == "-inf" || this->_val == "inf"\
		|| this->_val == "-nanf" || this->_val == "-nan" || this->_val == "nan" || this->_val == "nanf")
		std::cout << VERT << "Float  : " << strtof(this->_val.c_str(), &c) << "f" << BLANC << std::endl;
	else
		std::cout << VERT << "Float  : " << strtof(this->_val.c_str(), &c) << ".0f" << BLANC << std::endl;
	if (this->_val == "-inf" || this->_val == "inf" || this->_val == "-inff" || this->_val == "inff" 
	|| this->_val == "-nanf" || this->_val == "-nan" || this->_val == "nan" || this->_val == "nanf"
	|| this->_Float - static_cast<int>(this->_Float) > 0)
		std::cout << VERT << "Double : " << this->_Float << BLANC << std::endl;
	else
		std::cout << VERT << "Double : " << this->_Float << ".0" << BLANC << std::endl;
}

void	Para::printDouble(void)
{
	char *c;
	this->_Double = strtod(this->_val.c_str(), &c);
	if (this->_Double >= 32 && this->_Double <= 127)
		std::cout << VERT << "Char   : \'" << static_cast<char>(this->_Double) << "\'"<< BLANC << std::endl;
	else 
		std::cout << ROUGE << "Char   : non displayable..." << BLANC << std::endl;
	if (this->_Double <= 2147483647 && this->_Double >= -2147483648)
		std::cout << VERT << "Int    : " << static_cast<int>(this->_Double) << BLANC << std::endl;
	else
		std::cout << VERT << "Int    : overflow" << BLANC << std::endl; 
	if (strtod("1000000000000000000000000000000000000000000000000000000", &c) == strtod(this->_val.c_str(), &c)
		|| strtod("-1000000000000000000000000000000000000000000000000000000", &c) == strtod(this->_val.c_str(), &c)
		|| (strtof(this->_val.c_str(), &c) - this->_Double) > 0 || this->_val == "-inf" || this->_val == "inf"
		|| this->_val == "-nanf" || this->_val == "-nan" || this->_val == "nan" || this->_val == "nanf")
		std::cout << VERT << "Float  : " << strtof(this->_val.c_str(), &c) << "f" << BLANC << std::endl;
	else
		std::cout << VERT << "Float  : " << strtof(this->_val.c_str(), &c) << ".0f" << BLANC << std::endl;
	if (this->_Double - static_cast<int>(this->_Double) > 0 || this->_val == "-inf"  || this->_val == "-inff"
	|| this->_val == "-nanf" || this->_val == "-nan" || this->_val == "nan" || this->_val == "nanf")
		std::cout << VERT << "Double : " << this->_Double << BLANC << std::endl;
	else
		std::cout << VERT << "Double : " << this->_Double << ".0" << BLANC << std::endl;
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
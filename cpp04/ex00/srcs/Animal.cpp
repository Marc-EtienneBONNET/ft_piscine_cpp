/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 10:22:44 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/06 12:04:15 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/my_define_include.hpp"


//-------------------------constructeur/destructeur
Animal::Animal(void)
{
	std::cout << VERT << "Construction Animal" << BLANC << std::endl;
}

Animal::Animal(std::string Type) : type(Type)
{
	std::cout << VERT << "Construction Animal" << BLANC << std::endl;
}


Animal::~Animal(void)
{
	std::cout << VERT << "Destruction Animal" << BLANC << std::endl;
}

//-------------------------operator
Animal &Animal::operator=(Animal &ori)
{
	this->type = ori.getType();
	return (*this);
}

//-------------------------Surcharge fonction

std::string	Animal::getType(void)
{
	return (this->type);
}

void	Animal::makeSound(void)
{
	std::cout << VERT << "--defaulte animal--" << BLANC << std::endl;
}

void	Animal::printType(void)
{
	std::cout << VERT << "Type : " << this->type << BLANC << std::endl;
}
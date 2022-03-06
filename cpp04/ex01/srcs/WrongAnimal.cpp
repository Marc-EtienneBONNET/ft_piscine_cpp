/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 10:22:44 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/06 12:19:20 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/my_define_include.hpp"


//-------------------------constructeur/destructeur
WrongAnimal::WrongAnimal(void)
{
	std::cout << BLEU << "Construction WrongAnimal" << BLANC << std::endl;
}

WrongAnimal::WrongAnimal(std::string Type) : type(Type)
{
	std::cout << BLEU << "Construction WrongAnimal" << BLANC << std::endl;
}


WrongAnimal::~WrongAnimal(void)
{
	std::cout << BLEU << "Destruction WrongAnimal" << BLANC << std::endl;
}

//-------------------------operator
WrongAnimal &WrongAnimal::operator=(WrongAnimal &ori)
{
	this->type = ori.getType();
	return (*this);
}

//-------------------------Surcharge fonction

std::string	WrongAnimal::getType(void)
{
	return (this->type);
}

void	WrongAnimal::makeSound(void)
{
	std::cout << BLEU << "--defaulte animal--" << BLANC << std::endl;
}

void	WrongAnimal::printType(void)
{
	std::cout << BLEU << "Type : " << this->type << BLANC << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 10:22:34 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/23 15:45:26 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/my_define_include.hpp"

//-------------------------constructeur/destructeur
Cat::Cat(void)
{
	this->type = "Cat";
	this->cerveau = new Brain();
	std::cout << ROUGE << "Construction Cat" << BLANC << std::endl;
}

Cat::Cat(Cat &ori) 
{
	this->type = ori.getType();
	if (this->cerveau)
		delete this->cerveau;
	this->cerveau = new Brain();
	for (int i = 0; i < 100; i++)
		this->cerveau [i] = ori.cerveau[i];
}

Cat &Cat::operator=(Cat &ori)
{
	this->type = ori.getType();
	if (this->cerveau)
		delete this->cerveau;
	this->cerveau = new Brain();
	for (int i = 0; i < 100; i++)
		this->cerveau [i] = ori.cerveau[i];
	return (*this);
}

Cat::~Cat(void)
{
	delete this->cerveau; 
	std::cout << ROUGE << "Destruction Cat" << BLANC << std::endl;
}

//-------------------------Surcharge fonction
void	Cat::makeSound(void)
{
	std::cout << ROUGE << "Miaouuuu !" << BLANC << std::endl;
}

void	Cat::printType(void)
{
	std::cout << ROUGE << "type : " << this->type << BLANC << std::endl;
}

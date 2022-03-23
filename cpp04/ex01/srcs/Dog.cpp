/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 10:22:30 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/23 15:45:22 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/my_define_include.hpp"

//-------------------------constructeur/destructeur
Dog::Dog(void)
{
	this->type = "Dog";
	this->cerveau = new Brain();
	std::cout << VIOLET << "Construction Dog" << BLANC << std::endl;
}

Dog::~Dog(void)
{
	delete this->cerveau;
	std::cout << VIOLET << "Destruction Dog" << BLANC << std::endl;
}

//-------------------------Surcharge fonction
void	Dog::makeSound(void)
{
	std::cout << VIOLET << "Ouaf Ouaf !" << BLANC << std::endl;
}

void	Dog::printType(void)
{
	std::cout << VIOLET << "type : " << this->type << BLANC << std::endl;
}

Dog::Dog(Dog &ori) 
{
	this->type = ori.getType();
	if (this->cerveau)
		delete this->cerveau;
	this->cerveau = new Brain();
	for (int i = 0; i < 100; i++)
		this->cerveau [i] = ori.cerveau[i];
}

Dog &Dog::operator=(Dog &ori)
{
	this->type = ori.getType();
	if (this->cerveau)
		delete this->cerveau;
	this->cerveau = new Brain();
	for (int i = 0; i < 100; i++)
		this->cerveau [i] = ori.cerveau[i];
	return (*this);
}
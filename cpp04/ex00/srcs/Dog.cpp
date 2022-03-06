/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 10:22:30 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/06 12:04:42 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/my_define_include.hpp"

//-------------------------constructeur/destructeur
Dog::Dog(void)
{
	this->type = "Dog";
	std::cout << VIOLET << "Construction Dog" << BLANC << std::endl;
}

Dog::~Dog(void)
{
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
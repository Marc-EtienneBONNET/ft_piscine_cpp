/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 10:22:34 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/06 17:07:44 by mbonnet          ###   ########.fr       */
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

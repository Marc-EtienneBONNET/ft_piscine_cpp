/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 10:22:34 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/06 12:25:02 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/my_define_include.hpp"

//-------------------------constructeur/destructeur
WrongCat::WrongCat(void)
{
	this->type = "WrongCat";
	std::cout << BLEU_2 << "Construction WrongCat" << BLANC << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << BLEU_2 << "Destruction WrongCat" << BLANC << std::endl;
}

//-------------------------Surcharge fonction
void	WrongCat::makeSound(void)
{
	std::cout << BLEU_2 << "Miaouuuu !" << BLANC << std::endl;
}

void	WrongCat::printType(void)
{
	std::cout << BLEU_2 << "type : " << this->type << BLANC << std::endl;
}

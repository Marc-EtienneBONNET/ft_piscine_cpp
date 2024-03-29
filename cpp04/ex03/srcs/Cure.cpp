/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 18:19:29 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/21 17:05:20 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/my_define_include.hpp"  
#include "../includes/Cure.hpp"


Cure::Cure(void)  
{
	this->_type = "cure";
	std::cout << ROUGE << "Construction Cure" << BLANC << std::endl;
}

Cure::Cure(Cure &ori)  
{
	this->_type = ori.getType();
	std::cout << ROUGE << "Construction Cure" << BLANC << std::endl;
}

Cure::~Cure(void)
{
	std::cout << ROUGE << "Destruction Cure" << BLANC << std::endl;
}

AMateria	*Cure::clone(void) const
{
	return (new Cure());
}

Cure	&Cure::operator=(Cure &ori)
{
	this->_type = ori.getType();
	return (*this);
}

void Cure::test(void)
{
	std::cout << BLEU << "Test Cure" << BLANC << std::endl;
}

void Cure::use(ICharacter& target)
{
	std::cout << ROUGE << "* heals " << target.getName()  << "\'s wounds *"<< BLANC << std::endl;
}

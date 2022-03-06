/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 18:19:29 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/06 19:29:50 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/my_define_include.hpp" 

Cure::Cure(void) 
{
	this->_type = "cure";
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

/*virtual void Cure::use(ICharacter& target)
{
	std::cout << ROUGE << "* heals " << target.getName()  << "\'s wounds *"<< BLANC << std::encl;
}*/

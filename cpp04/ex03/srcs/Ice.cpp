/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 18:19:25 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/07 10:57:37 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/my_define_include.hpp" 
#include "../includes/Ice.hpp"

Ice::Ice(void) 
{
	this->_type = "ice";
	std::cout << BLEU << "Construction Ice" << BLANC << std::endl;
}

Ice::~Ice(void)
{
	std::cout << BLEU << "Destruction Ice" << BLANC << std::endl;
}

AMateria	*Ice::clone(void) const
{
	return (new Ice());
}

Ice	&Ice::operator=(Ice &ori)
{
	this->_type = ori.getType();
	return (*this);
}

void Ice::test(void)
{
	std::cout << BLEU << "Test ice" << BLANC << std::endl;
}

void Ice::use(ICharacter& target)
{
	std::cout << BLEU << "* shoots an ice bolt at " << target.getName() << " *" << BLANC << std::endl;
}


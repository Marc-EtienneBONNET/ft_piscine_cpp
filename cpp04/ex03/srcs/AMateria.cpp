/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 18:19:41 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/21 17:04:50 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/my_define_include.hpp"
#include "../includes/AMateria.hpp"

 
AMateria::AMateria(void) : _type("") 
{
    std::cout << VERT << "Construction AMateria" << BLANC << std::endl;
}

AMateria::AMateria(AMateria &ori)
{
    this->_type = ori.getType();
    std::cout << VERT << "Construction AMateria" << BLANC << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type)
{
    std::cout << VERT << "Construction AMateria" << BLANC << std::endl;
}

AMateria::~AMateria(void)
{
    std::cout << VERT << "Destruction AMateria" << BLANC << std::endl;
}

std::string const &AMateria::getType() const
{
    return (this->_type);
}

void AMateria::use(ICharacter& target)
{
    (void)target;
	//std::cout << ROUGE << "* heals " << target.getName()  << "\'s wounds *"<< BLANC << std::endl;
}

AMateria &AMateria::operator=(AMateria &ori)
{
    if (this != &ori)
        *this = ori;
    return (*this);
}



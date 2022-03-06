/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 18:19:41 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/06 19:13:55 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/my_define_include.hpp"

AMateria::AMateria(void) : _type("")
{
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


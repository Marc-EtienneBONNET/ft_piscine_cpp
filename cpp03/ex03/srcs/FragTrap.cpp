/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 11:28:29 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/03 16:31:12 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/FragTrap.hpp"

const int    FragTrap::_defaultPv = 100;
const int    FragTrap::_defaultEn = 100;
const int    FragTrap::_defaultDomage = 30; 

FragTrap::FragTrap(void) : ClapTrap("defaulte_clap_name", FragTrap::_defaultPv, FragTrap::_defaultEn, FragTrap::_defaultDomage) 
{ 
    std::cout << VERT << "-----------------------------------------------------------------------------------" << BLANC << std::endl;
    std::cout << "FragTrap : "<< VERT << "\tUn nouveau ninja est rentrer dans la legande(" << this->_nom << ")"<< BLANC << std::endl;
    std::cout << VERT << "-----------------------------------------------------------------------------------" << BLANC << std::endl;
}


FragTrap::FragTrap(std::string name) : ClapTrap(name + "_clap_name", FragTrap::_defaultPv, FragTrap::_defaultEn, FragTrap::_defaultDomage) 
{ 
    std::cout << VERT << "-----------------------------------------------------------------------------------" << BLANC << std::endl;
    std::cout << "FragTrap : "<< VERT << "\tUn nouveau ninja est rentrer dans la legande(" << this->_nom << ")"<< BLANC << std::endl;
    std::cout << VERT << "-----------------------------------------------------------------------------------" << BLANC << std::endl;
}

FragTrap::~FragTrap(void) 
{
    std::cout << VERT << "-----------------------------------------------------------------------------------" << BLANC << std::endl;
    std::cout << "FragTrap : "<< VERT << "\tUne legande nous a quitter...!" << BLANC << std::endl;
    std::cout << VERT << "-----------------------------------------------------------------------------------" << BLANC << std::endl;
}

void    FragTrap::highFivesGuys(void)
{
    if (this->_en > 0)
    {
        std::cout << "FragTrap : " << VERT << this->_nom << " vient d ouvrir sont charingan !" << BLANC << std::endl;
        this->_en--;
    }
    else
    {
        std::cout << "FragTrap : " << VERT << this->_nom << " N as plus de force..." << BLANC << std::endl;
    }

    
}
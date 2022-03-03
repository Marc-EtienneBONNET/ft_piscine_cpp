/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 11:28:29 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/03 16:30:49 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"

const int    ScavTrap::_defaultPv = 100;
const int    ScavTrap::_defaultEn = 50;
const int    ScavTrap::_defaultDomage = 20; 

ScavTrap::ScavTrap(void) : ClapTrap("defaulte_clap_name", ScavTrap::_defaultPv, ScavTrap::_defaultEn, ScavTrap::_defaultDomage)
{
    std::cout << BLEU << "-----------------------------------------------------------------------------------" << BLANC << std::endl;
    std::cout << "ScavTrap : " << BLEU << "\tUn nouveau ninja vient d etre promu CHUNIN(" << this->_nom << ")" << BLANC << std::endl;
    std::cout << BLEU << "-----------------------------------------------------------------------------------" << BLANC << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name + "_clap_name", ScavTrap::_defaultPv, ScavTrap::_defaultEn, ScavTrap::_defaultDomage)
{   
    std::cout << BLEU << "-----------------------------------------------------------------------------------" << BLANC << std::endl;
    std::cout << "ScavTrap : "<< BLEU << "\tUn nouveau ninja vient d etre promu CHUNIN(" << this->_nom << ")" << BLANC << std::endl;
    std::cout << BLEU << "-----------------------------------------------------------------------------------" << BLANC << std::endl;
}

ScavTrap::~ScavTrap(void) 
{
    std::cout << BLEU << "-----------------------------------------------------------------------------------" << BLANC << std::endl;
    std::cout << "ScavTrap : "<< BLEU << "\tUn Chunin nous a quitter...!" << BLANC << std::endl;
    std::cout << BLEU << "-----------------------------------------------------------------------------------" << BLANC << std::endl;
}

void    ScavTrap::guardGate(void)
{
    if (this->_en > 0)
    {
        std::cout << "ScavTrap : " << BLEU << this->_nom << " vient d entrer en mode hermite !" << BLANC << std::endl;
        this->_en--;
    }
    else
    {
        std::cout << "ScavTrap : " << BLEU << this->_nom << " N as plus de force..." << BLANC << std::endl;
    }
}

void        ScavTrap::attack(const std::string& target)
{
    if (this->_en > 0)
    {
        this->_en--;
        std::cout << "ScavTrap : " << BLEU << this->_nom << " a dessider d attaquer " << target << ". Il pert : " << this->_domage << " pv" << BLANC << std::endl;
    }
    else
        std::cout << "ScavTrap : " << this->_nom << " est a bout de force, il ne peux plus attaquer...  energie : " << this->_en << std::endl;
}
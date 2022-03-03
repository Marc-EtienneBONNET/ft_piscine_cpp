/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 13:36:59 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/03 16:31:43 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/DiamondTrap.hpp" 

DiamondTrap::DiamondTrap(void) : ClapTrap("defaulte_clap_name", FragTrap::_defaultPv , ScavTrap::_defaultEn, FragTrap::_defaultDomage)
{   
    std::cout << JAUNE << "-----------------------------------------------------------------------------------" << BLANC << std::endl;
    std::cout << "DiamondTrap : "<< JAUNE << "\tUn nouveau hokage vient d etre promu(" << this->_nom << ")" << BLANC << std::endl;
    std::cout << JAUNE << "-----------------------------------------------------------------------------------" << BLANC << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name", FragTrap::_defaultPv , ScavTrap::_defaultEn, FragTrap::_defaultDomage)
{
    this->_nom = name;
    std::cout << JAUNE << "-----------------------------------------------------------------------------------" << BLANC << std::endl;
    std::cout << "DiamondTrap : "<< JAUNE << "\tUn nouveau hokage vient d etre promu(" << this->_nom << ")" << BLANC << std::endl;
    std::cout << JAUNE << "-----------------------------------------------------------------------------------" << BLANC << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << JAUNE << "-----------------------------------------------------------------------------------" << BLANC << std::endl;
    std::cout << "DiamondTrap : "<< JAUNE << "\tUn nouveau hokage vient de nous auiter ...(" << this->_nom << ")" << BLANC << std::endl;
    std::cout << JAUNE << "-----------------------------------------------------------------------------------" << BLANC << std::endl;
}
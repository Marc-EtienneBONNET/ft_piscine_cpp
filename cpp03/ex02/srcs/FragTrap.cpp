/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 11:28:29 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/03 13:23:29 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
    this->_nom = name;
    this->_pv = 100;
    this->_en = 100;
    this->_domage = 30;
    
    std::cout << VIOLET << "\t--------------------------------------------" << BLANC << std::endl;
    std::cout << VIOLET << "\tUn nouveau ninja est rentrer dans la legande(" << this->_nom << ")"<< BLANC << std::endl;
    std::cout << VIOLET << "\t--------------------------------------------" << BLANC << std::endl;
}

FragTrap::~FragTrap(void) 
{
    std::cout << VIOLET << "\t------------------------------" << BLANC << std::endl;
    std::cout << VIOLET << "\tUne legande nous a quitter...!" << BLANC << std::endl;
    std::cout << VIOLET << "\t------------------------------" << BLANC << std::endl;
}

void    FragTrap::highFivesGuys(void)
{
    if (this->_en > 0)
    {
        std::cout << "FragTrap : " << BLEU << this->_nom << " vient d ouvrir sont charingan !" << BLANC << std::endl;
        this->_en--;
    }
    else
    {
        std::cout << "FragTrap : " << BLEU << this->_nom << " N as plus de force..." << BLANC << std::endl;
    }

    
}
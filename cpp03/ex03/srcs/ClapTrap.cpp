/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 11:28:29 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/03 16:34:10 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"


//-------------------constructeur 

ClapTrap::ClapTrap(void)  : _nom(""), _pv(0), _en(0), _domage(0)
{
    std::cout << VIOLET << "-----------------------------------------------------------------------------------" << BLANC << std::endl;
    std::cout << "ClapTrap : " << VIOLET << "\tUn nouveau ninja sort de l ecole de formation! (" << this->_nom << ")" << BLANC << std::endl;
    std::cout << VIOLET << "-----------------------------------------------------------------------------------" << BLANC << std::endl;
}


ClapTrap::ClapTrap(std::string name) : _nom(name), _pv(10), _en(10), _domage(0)
{
    std::cout << VIOLET << "-----------------------------------------------------------------------------------" << BLANC << std::endl;
    std::cout << "ClapTrap : "<< VIOLET << "\tUn nouveau ninja sort de l ecole de formation!(" << this->_nom << ")"<< BLANC << std::endl;
    std::cout << VIOLET << "-----------------------------------------------------------------------------------" << BLANC << std::endl;
}

ClapTrap::ClapTrap(std::string name, int pv, int en, int domage) :
    _nom(name), _pv(pv), _en(en), _domage(domage)
{
    std::cout << VIOLET << "-----------------------------------------------------------------------------------" << BLANC << std::endl;
    std::cout << "ClapTrap : " << VIOLET << "\tUn nouveau ninja sort de l ecole de formation!(" << this->_nom << ")"<< BLANC << std::endl;
    std::cout << VIOLET << "-----------------------------------------------------------------------------------" << BLANC << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &ori)
{
    this->_nom = ori.getNom();
    this->_pv = ori.getPv();
    this->_en = ori.getEn();
    this->_domage = ori.getDomage();
}


//-------------------destructeur

ClapTrap::~ClapTrap(void)
{
    std::cout << VIOLET << "-----------------------------------------------------------------------------------" << BLANC << std::endl;
    std::cout << "ClapTrap : " << VIOLET << "\tUn ninja nous a quiter !(" << this->_nom << ")"<< BLANC << std::endl;
    std::cout << VIOLET << "-----------------------------------------------------------------------------------" << BLANC << std::endl;
    std::cout << "ClapTrap : " << VIOLET << "epitaphe : " << VIOLET << std::endl << this->_nom << "il c est battu pour la flame de konoha !" << std::endl;
}

//-------------------Geter

std::string ClapTrap::getNom(void) const
{
    return (this->_nom);
}

int ClapTrap::getPv(void) const
{
    return (this->_pv);
}

int ClapTrap::getEn(void) const
{
    return (this->_en);
}

int ClapTrap::getDomage(void) const
{
    return (this->_domage);
}
//-------------------surecharge operator

ClapTrap &ClapTrap::operator=(ClapTrap const &ori)
{
    if (this != &ori)
    {
        this->_nom = ori.getNom();
        this->_pv = ori.getPv();
        this->_en = ori.getEn();
        this->_domage = ori.getDomage();


    }
    return (*this);
}

//-------------------fonction membre
void    ClapTrap::myPrintInfo(void)
{
    std::cout << "ClapTrap : " << VIOLET << "nom    : " << VIOLET << this->_nom << BLANC << std::endl;
    std::cout << "ClapTrap : " << VIOLET << "Pv     : " << this->_pv << BLANC << std::endl;
    std::cout << "ClapTrap : " << VIOLET << "En     : " << this->_en << BLANC << std::endl;
    std::cout << "ClapTrap : " << VIOLET << "Domage : " << this->_domage << BLANC << std::endl;
}

void        ClapTrap::attack(const std::string& target)
{
    if (this->_en > 0)
    {
        this->_en--;
        std::cout << "ClapTrap : " << BLEU << this->_nom << " a dessider d attaquer " << target << ". Il pert : " << this->_domage << " pv" << BLANC << std::endl;
    }
    else
        std::cout << "ClapTrap : " << this->_nom << " est a bout de force, il ne peux plus attaquer...  energie : " << this->_en << std::endl;
}
void        ClapTrap::takeDamage(unsigned int amount)
{
    if (amount > (unsigned int)this->_pv)
        amount = (unsigned int)this->_pv;
    this->_pv -= amount;
    std::cout << "ClapTrap : " << VIOLET << this->_nom << " Est attaquet !" << " Il pert " << amount << " point de vie..." << BLANC << std::endl;
    if (this->_pv <= 0)
        std::cout << "ClapTrap : " << VIOLET << this->_nom << " a subit une attaque devastatrice, il est dans le coma..." << BLANC << std::endl;
}

void        ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_en > 0)
    {
        this->_pv += amount;
        this->_en--;
        std::cout << "ClapTrap : " << VIOLET << this->_nom << " se soigne... il recupere : " << amount << "pv" << BLANC << std::endl;
    }
    else
        std::cout << "ClapTrap : " << this->_nom << " est a bout de force, il ne peux pas se soigner ...  energie : " << this->_en << BLANC << std::endl;
}

void        ClapTrap::run(void)
{
    if (this->_en > 0)
    {
        this->_en--;
        std::cout << "ClapTrap : " << VIOLET << this->_nom << " court " << "energie : " << this->_en << BLANC << std::endl;
    }
    else
        std::cout << "ClapTrap : " << this->_nom << " est a bout de force, il ne peux plus courir ...  energie : " << this->_en << BLANC << std::endl;
}

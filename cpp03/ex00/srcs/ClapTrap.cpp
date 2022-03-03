#include "../includes/my_define_include.hpp"


//-------------------constructeur 
ClapTrap::ClapTrap(std::string name) : _nom(name), _pv(10), _en(10), _domage(0)
{}


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
void    ClapTrap::myPrintinfo(void)
{
    std::cout << std::endl << VERT << "nom    : " << ROUGE << this->_nom << BLANC << std::endl;
    std::cout << VERT << "Pv     : " << this->_pv << BLANC << std::endl;
    std::cout << VERT << "En     : " << this->_en << BLANC << std::endl;
    std::cout << VERT << "Domage : " << this->_domage << BLANC << std::endl;
}

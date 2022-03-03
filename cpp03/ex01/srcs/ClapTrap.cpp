#include "../includes/ClapTrap.hpp"


//-------------------constructeur 
ClapTrap::ClapTrap(std::string name) : _nom(name), _pv(10), _en(10), _domage(0)
{
    std::cout << VIOLET << "\t----------------------------------------------" << BLANC << std::endl;
    std::cout << VIOLET << "\tUn nouveau ninja sort de l ecole de formation!" << BLANC << std::endl;
    std::cout << VIOLET << "\t----------------------------------------------" << BLANC << std::endl;
    std::cout << VIOLET << "Carte d ID : " << BLANC << std::endl;
    this->myPrintinfo();
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
    std::cout << VIOLET << "\t------------------------" << BLANC << std::endl;
    std::cout << VIOLET << "\tUn ninja nous a quiter !" << BLANC << std::endl;
    std::cout << VIOLET << "\t------------------------" << BLANC << std::endl;
    std::cout << VIOLET << "epitaphe : " << JAUNE << std::endl << this->_nom << "il c est battu pour la flame de konoha !" << std::endl;
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
    std::cout << VERT << "nom    : " << ROUGE << this->_nom << BLANC << std::endl;
    std::cout << VERT << "Pv     : " << this->_pv << BLANC << std::endl;
    std::cout << VERT << "En     : " << this->_en << BLANC << std::endl;
    std::cout << VERT << "Domage : " << this->_domage << BLANC << std::endl;
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
    std::cout << "ClapTrap : " << ROUGE << this->_nom << " Est attaquet !" << " Il pert " << amount << " point de vie..." << BLANC << std::endl;
    if (this->_pv <= 0)
        std::cout << "ClapTrap : " << ROUGE << this->_nom << " a subit une attaque devastatrice, il est dans le coma..." << BLANC << std::endl;
}

void        ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_en > 0)
    {
        this->_pv += amount;
        this->_en--;
        std::cout << "ClapTrap : " << VERT << this->_nom << " se soigne... il recupere : " << amount << "pv" << BLANC << std::endl;
    }
    else
        std::cout << "ClapTrap : " << this->_nom << " est a bout de force, il ne peux pas se soigner ...  energie : " << this->_en << BLANC << std::endl;
}

void        ClapTrap::run(void)
{
    if (this->_en > 0)
    {
        this->_en--;
        std::cout << "ClapTrap : " << VERT << this->_nom << " court " << "energie : " << this->_en << BLANC << std::endl;
    }
    else
        std::cout << "ClapTrap : " << this->_nom << " est a bout de force, il ne peux plus courir ...  energie : " << this->_en << BLANC << std::endl;
}

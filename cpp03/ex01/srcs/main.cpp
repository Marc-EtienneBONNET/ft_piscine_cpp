#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"

int     main()
{
    ScavTrap    Jiraya("Jiraya Ogata");
    std::cout << "-----debut des combats-----" << std::endl;
    Jiraya.attack("orochimaru");
    Jiraya.takeDamage(10);
    Jiraya.beRepaired(13);
    Jiraya.guardGate();
    std::cout << "-----fin des combats-----" << std::endl;

}
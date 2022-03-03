#include "../includes/ClapTrap.hpp"
#include "../includes/FragTrap.hpp"

int     main()
{
    FragTrap    Obito("Obito Ushiha");
    std::cout << "-----debut des combats-----" << std::endl;
    Obito.attack("Kakashi");
    Obito.takeDamage(10);
    Obito.beRepaired(13);
    Obito.highFivesGuys();
    std::cout << "-----fin des combats-----" << std::endl;

}
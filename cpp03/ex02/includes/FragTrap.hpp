#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public : 
    FragTrap(std::string name);
    ~FragTrap(void);
    void    highFivesGuys(void);
private : 

};

#endif
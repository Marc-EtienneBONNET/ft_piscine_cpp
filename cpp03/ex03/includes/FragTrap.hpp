#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public : 
    FragTrap(void);
    FragTrap(std::string name);
    ~FragTrap(void);
    void    highFivesGuys(void);

protected:
    static const int    _defaultPv;
    static const int    _defaultEn;
    static const int    _defaultDomage;  
private : 

};

#endif 
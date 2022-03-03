

#ifndef CLAPTRAP_H
# define CLAPTRAP_H
# include <iostream>
# include <string>

# define BLEU "\e[1;36m"
# define BLEU_2 "\e[1;34m"
# define ROUGE "\e[1;31m"
# define VERT "\e[1;32m"
# define JAUNE "\e[1;33m"
# define VIOLET "\e[1;35m"
# define BLANC "\e[0m"

class ClapTrap 
{
public : 
    ClapTrap(void);
    ClapTrap(std::string name);
    ClapTrap(ClapTrap &ori);
    ~ClapTrap(void);
    std::string getNom(void) const;
    int         getPv(void) const;
    int         getEn(void) const;
    int         getDomage(void) const;
    void        myPrintInfo(void);
    void        attack(const std::string& target);
    void        takeDamage(unsigned int amount);
    void        beRepaired(unsigned int amount);
    void        run();
    ClapTrap &operator=(ClapTrap const &ori);
protected : 
    std::string _nom;
    int         _pv;
    int         _en;
    int         _domage;
    ClapTrap(std::string name, int pv, int en, int domage);

};
#endif
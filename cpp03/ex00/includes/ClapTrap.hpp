class ClapTrap
{
public : 
    ClapTrap(std::string name);
    ClapTrap(ClapTrap &ori);
    ~ClapTrap(void);
    std::string getNom(void) const;
    int         getPv(void) const;
    int         getEn(void) const;
    int         getDomage(void) const;
    void        myPrintinfo(void);
    ClapTrap &operator=(ClapTrap const &ori);


private : 
    std::string _nom;
    int         _pv;
    int         _en;
    int         _domage;
};
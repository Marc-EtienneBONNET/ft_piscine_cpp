
# include <iostream>
# include "Fixed.hpp"

int main()
{
    Fixed a(2);
    Fixed b(3);
    Fixed c;
    

    std::cout << "a                    : "<< a << std::endl;
    std::cout << "b                    : "<< b << std::endl;
    std::cout << "adition a + b        : "<< a + b << std::endl;
    std::cout << "soustraction a - b   : "<< a - b << std::endl;
    std::cout << "a                    : "<< a << std::endl;
    std::cout << "b                    : "<< b << std::endl;
    std::cout << "multiplication a * b : "<< a * b << std::endl;
    std::cout << "soustraction a / b   : "<< a / b << std::endl;
    std::cout << "c                    : "<< c << std::endl;
    std::cout << "++c                  : "<< ++c << std::endl;
    std::cout << "c                    : "<< c << std::endl;
    std::cout << "c++                  : "<< c++ << std::endl;
    std::cout << "c                    : "<< c << std::endl;
    std::cout << "--c                  : "<< --c << std::endl;
    std::cout << "c                    : "<< c << std::endl;
    std::cout << "c--                  : "<< c-- << std::endl;
    std::cout << "c                    : "<< c << std::endl;
    std::cout << "min(a, b)            : "<< c.min(a,b) << std::endl;
    std::cout << "max(a, b)            : "<< c.max(a,b) << std::endl;

    
    
}
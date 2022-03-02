/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:09:38 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/02 20:51:48 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

int main( void )   
{
    /*
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
    */
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
} 
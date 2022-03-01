/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:09:38 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/01 18:31:01 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/my_define_include.hpp"

int main( void )  
{
    Fixed a(10);
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



	return 0;
} 
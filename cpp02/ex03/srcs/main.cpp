/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:09:38 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/02 20:43:30 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"

int main( void )   
{
    Point const a(Fixed(5),Fixed(5));
    Point const b(Fixed(10),Fixed(10)); 
    Point const c(Fixed(5),Fixed(10));
    Point const p1(Fixed(6),Fixed(7));
    Point const p2(Fixed(4.9f),Fixed(5.1f));
    Point const p3(Fixed(5.1f),Fixed(6));
    Point const p4(Fixed(6),Fixed(7.03f));
    Point const p5(Fixed(9),Fixed(9));
    std::cout << BLEU << "\t\t--------------------------------------------" << std::endl;
    std::cout << "\t\tBien venu dans le comparateur de position..." << std::endl;
    std::cout << "\t\t--------------------------------------------" << BLANC <<std::endl << std::endl;
    std::cout << VIOLET << "-----------------------" << std::endl;
    std::cout << "localisation des point :" << std::endl;
    std::cout << "point ax           : " << a.getNbInFixed() << std::endl;
    std::cout << "point ay           : " << a.getFixed_y_test() << std::endl;
    std::cout << "point ax           : " << b.getNbInFixed() << std::endl;
    std::cout << "point ay           : " << b.getFixed_y_test() << std::endl;
    std::cout << "point ax           : " << c.getNbInFixed() << std::endl;
    std::cout << "point ay           : " << c.getFixed_y_test() << std::endl;
    std::cout << "-----------------------" << std::endl;
    std::cout << "res p1 p2 p3 p4 p5   :" << std::endl;
    std::cout << "resp1              : " << bsp(a,b,c,p1) << std::endl;
    std::cout << "resp2              : " << bsp(a,b,c,p2) << std::endl;
    std::cout << "resp3              : " << bsp(a,b,c,p3) << std::endl;
    std::cout << "resp4              : " << bsp(a,b,c,p4) << std::endl;
    std::cout << "resp5              : " << bsp(a,b,c,p5) << BLANC << std::endl;
	return 0;
} 
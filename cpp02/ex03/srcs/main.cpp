/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:09:38 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/02 13:20:23 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/my_define_include.hpp"

int main( void )   
{
    /*
    Point a;
    Point b(10, 20);
    Point c(b);

    std::cout << "init null       x: " << a.getFixed_x().toInt() << std::endl;
    std::cout << "init null       y: " << a.getFixed_y().toInt() << std::endl;
    std::cout << "init par x et y x: " << b.getFixed_x().toInt() << std::endl;
    std::cout << "init par x et y y: " << b.getFixed_y().toInt() << std::endl;
    std::cout << "init copy       x: " << c.getFixed_x().toInt() << std::endl;
    std::cout << "init copy       y: " << c.getFixed_y().toInt() << std::endl;
*/

    Point v1(5,5);
    Point v2(10,10);
    Point v3(5,10);
    Point p(7,7);
    std::cout << std::endl;
    std::cout << "v1              x: " << v1.getFixed_x().toInt() << std::endl;
    std::cout << "v1              y: " << v1.getFixed_y().toInt() << std::endl;
    std::cout << std::endl;
    std::cout << "v1              x: " << v2.getFixed_x().toInt() << std::endl;
    std::cout << "v1              y: " << v2.getFixed_y().toInt() << std::endl;
    std::cout << std::endl;
    std::cout << "v1              x: " << v3.getFixed_x().toInt() << std::endl;
    std::cout << "v1              y: " << v3.getFixed_y().toInt() << std::endl;
    std::cout << std::endl;
    std::cout << "p               x: " << p.getFixed_x().toInt() << std::endl;
    std::cout << "p               y: " << p.getFixed_y().toInt() << std::endl;
    std::cout << "res              : " << bsp(v1,v2,v3,p);
    


    
    
	return 0;
} 
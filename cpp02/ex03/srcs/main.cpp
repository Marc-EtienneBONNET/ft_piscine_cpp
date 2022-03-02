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

    Point const a(Fixed(5),Fixed(5));
    Point const b(Fixed(10),Fixed(10)); 
    Point const c(Fixed(5),Fixed(10));
    Point const p(Fixed(6),Fixed(7));
    std::cout << std::endl;
    std::cout << "a              x: " << a.getFixed_x_test() << std::endl;
    std::cout << "a              y: " << a.getFixed_y_test() << std::endl;
    std::cout << std::endl;
    std::cout << "b              x: " << b.getFixed_x_test() << std::endl;
    std::cout << "b              y: " << b.getFixed_y_test() << std::endl;
    std::cout << std::endl;
    std::cout << "c              x: " << c.getFixed_x_test() << std::endl;
    std::cout << "c              y: " << c.getFixed_y_test() << std::endl;
    std::cout << std::endl;
    std::cout << "p              x: " << p.getFixed_x_test() << std::endl;
    std::cout << "p              y: " << p.getFixed_y_test() << std::endl;
    
    std::cout << "res              : " << bsp(a,b,c,p);
    


    
    
	return 0;
} 
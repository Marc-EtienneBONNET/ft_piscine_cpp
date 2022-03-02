/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 08:22:23 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/02 13:23:34 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/my_define_include.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	(void)a;
	//(void)b;
	(void)c;
	(void)point;

	//float droite;
	//droite = tmp.getFixed_y().toFloat();
	//roite = a.getFixed_x_test();
	//droite = ((a.getFixed_x().toFloat() - point.getFixed_x().toFloat())*(a.getFixed_y().toFloat() - point.getFixed_y().toFloat()))
	//droite2 = ((b.getFixed_x().toFloat() - point.getFixed_x().toFloat())*(b.getFixed_y().toFloat() - point.getFixed_y().toFloat()))
	//droite = (droite - droite2);
	std::cout << std::endl << "droite : " << b.getFixed_x_test() << std::endl;
	return (0);
}
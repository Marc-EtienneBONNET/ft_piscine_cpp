/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 08:22:23 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/02 20:42:02 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"

bool test_coter(Point const a, Point const b, Point const point)
{
	float droite1 = ((a.getNbInFixed() - point.getNbInFixed()) * (b.getFixed_y_test() - point.getFixed_y_test()));
	float droite2 = ((a.getFixed_y_test() - point.getFixed_y_test()) * (b.getNbInFixed() - point.getNbInFixed()));
	if (droite1 - droite2 > 0)
		return (true);
	return (false);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	if (test_coter(a, b, point) && test_coter(b, c, point) && test_coter(c, a, point))
	{
		std::cout << VERT << "(true) " << VIOLET;
		return (true);
	}
	else
	{
		std::cout << ROUGE << "(false)" << VIOLET;
		return (false);
	}
} 
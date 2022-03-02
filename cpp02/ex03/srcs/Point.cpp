/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 07:17:53 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/02 13:29:19 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/my_define_include.hpp"

Point::Point(void) : _x(0), _y(0)
{
	std::cout << "construction du point par defaux" << std::endl;
}

Point::Point(const float x, const float y) : _x(x), _y(y) 
{
	std::cout << "construction du point par init de x et y" << std::endl;
}

Point::Point(Point const &ori)
{
	*this = ori;
	std::cout << "construction du point par copie {" << ori.getFixed_x_test() << "}" << std::endl;
}

Point::~Point(void)
{
	//std::cout << "Destruction du point" << std::endl;
}

const Fixed	Point::getFixed_x(void)
{
	return (this->_x);
}

const Fixed	Point::getFixed_y(void)
{
	return (this->_x);

}

float	Point::getFixed_x_test(void)
{
	return (this->_x.toFloat());
}


Point	&Point::operator=(const Point &ori)
{
	(void)ori;
	return (*this);
}

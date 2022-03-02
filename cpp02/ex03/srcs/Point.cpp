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

Point::Point(int test)
{
	this->_test = test;
	std::cout << "construction du point par defaux" << std::endl;
}


Point::Point(Fixed x, Fixed y) : _x(x), _y(y) 
{
	//std::cout << "construction du point par init de x et y" << std::endl;
}

Point::Point(Point const &ori)
{
	*this = ori;
}

Point::~Point(void)
{
	//std::cout << "Destruction du point" << std::endl;
}

Fixed	Point::getFixed_x(void) const
{
	return (this->_x);
}

Fixed	Point::getFixed_y(void) const
{
	return (this->_y);

}

float	Point::getFixed_x_test(void) const
{
	return (this->_x.toFloat());
}

float	Point::getFixed_y_test(void) const
{
	return (this->_y.toFloat());
}


Point	&Point::operator=(const Point &ori)
{
	(void)ori;
	return (*this);
}

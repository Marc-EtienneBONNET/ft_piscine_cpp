/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 07:17:53 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/02 20:42:12 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp" 
 
Point::Point(void) : _x(0), _y(0)
{
}


Point::Point(Fixed x, Fixed y) : _x(x), _y(y) 
{
}

Point::Point(const float x, const float y) : _x(x), _y(y) 
{
}

Point::Point(Point const &ori) : _x(ori.getFixed_x()), _y(ori.getFixed_y()) 
{
}

Point::~Point(void)
{
}

Fixed	Point::getFixed_x(void) const
{
	return (this->_x);
}

Fixed	Point::getFixed_y(void) const
{
	return (this->_y);

}

float	Point::getNbInFixed(void) const
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

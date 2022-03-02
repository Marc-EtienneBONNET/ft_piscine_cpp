/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 07:11:43 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/02 20:42:46 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_DEFINE_INCLUDE_H
# define MY_DEFINE_INCLUDE_H
# include <iostream>
# include <string>
# include <cmath>
# include "Fixed.hpp"

# define BLEU "\e[1;36m"
# define BLEU_2 "\e[1;34m"
# define ROUGE "\e[1;31m"
# define VERT "\e[1;32m"
# define JAUNE "\e[1;33m"
# define VIOLET "\e[1;35m"
# define BLANC "\e[0m"



class Point
{
public :
	Point(void);
	Point(const float x, const float y);
	Point(Fixed x, Fixed y);
	Point(const Point & ori); 
	~Point(void);
	Point &operator=(const Point &ori);
	float getNbInFixed(void) const;
	float getFixed_y_test(void) const;
	Fixed getFixed_x(void) const;
	Fixed getFixed_y(void) const;
private :
	const Fixed _x;
	const Fixed _y;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);
#endif
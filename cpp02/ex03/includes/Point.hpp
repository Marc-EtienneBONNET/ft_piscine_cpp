/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 07:11:43 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/02 13:29:04 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


class Point
{
public :
	Point(void);
	Point(const float x, const float y);
	Point(const Point & ori);
	~Point(void);
	Point &operator=(const Point &ori);
	float getFixed_x_test(void);
	const Fixed getFixed_x(void);
	const Fixed getFixed_y(void);
	
private :
	const Fixed _x;
	const Fixed _y;
};
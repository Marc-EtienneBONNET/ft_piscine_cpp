/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 13:20:09 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/02 20:51:00 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

Fixed::Fixed(void)
{
	this->_nb = 0;
}

Fixed::Fixed(int const new_nb)
{
	this->_nb = new_nb << this->_nb_bits;
}

Fixed::Fixed(float const new_nb)
{
	(void)new_nb;
	this->_nb = (int)(roundf(new_nb *( 1 << this->_nb_bits)));
}

Fixed::~Fixed(void)
{
	
}


Fixed::Fixed(Fixed const & ori)
{
	*this = ori;
}

int	Fixed::getRawBits(void) const
{
	return (this->_nb);
}

void	Fixed::setRawBits(int const raw)
{
	this->_nb = raw;
}

float	Fixed::toFloat(void)const
{
	return ((float)(this->_nb) / (1 << this->_nb_bits));
}

int	Fixed::toInt(void)const
{
	return ((int)(this->_nb) / (1 << this->_nb_bits));
}




Fixed & Fixed::operator=(Fixed const & ori)
{
	if (this != &ori)
		this->_nb = ori.getRawBits();
	return (*this);
} 

std::ostream &operator<<(std::ostream &out, Fixed const & ori)
{
	out << ori.toFloat();
	return (out);
} 

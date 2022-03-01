/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 13:20:09 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/01 19:35:38 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/my_define_include.hpp"

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

Fixed &Fixed::min(Fixed &n1, Fixed &n2)
{
	if (n1.toFloat() < n2.toFloat())
		return (n1);
	else
		return (n2);
}

Fixed &Fixed::max(Fixed &n1, Fixed &n2)
{
	if (n1.toFloat() > n2.toFloat())
		return (n1);
	else
		return (n2);
}

Fixed Fixed::min(const Fixed &n1, const Fixed &n2)
{

	Fixed tmp;
	if (n1.toFloat() < n2.toFloat())
		tmp = Fixed(n1);
	else
		tmp = Fixed(n2);
	return (tmp);
}

Fixed Fixed::max(const Fixed &n1, const Fixed &n2)
{
	Fixed tmp;
	if (n1.toFloat() > n2.toFloat())
		tmp = Fixed(n1);
	else
		tmp = Fixed(n2);
	return (tmp);
}

Fixed & Fixed::operator=(Fixed const & ori)
{
	if (this != &ori)
		this->_nb = ori.getRawBits();
	return (*this);
}

int Fixed::operator>(Fixed const &f1) const
{
	if (this->_nb > f1.getRawBits())
		return (0);
	else
		return (1);
}

int Fixed::operator<(Fixed const & f1) const
{
	if (this->_nb < f1.getRawBits())
		return (0);
	else
		return (1);
}

int	Fixed::operator>=(Fixed const & f1) const
{
	if (this->_nb >= f1.getRawBits())
		return (0);
	else
		return (1);
}

int Fixed::operator<=(Fixed const & f1) const
{
	if (this->_nb <= f1.getRawBits())
		return (0);
	else
		return (1);
}

int Fixed::operator==(Fixed const & f1) const
{
	if (this->_nb == f1.getRawBits())
		return (0);
	else
		return (1);
}

int Fixed::operator!=(Fixed const & f1) const
{
	if (this->_nb != f1.getRawBits())
		return (0);
	else
		return (1);
}

Fixed Fixed::operator+(Fixed const & f1) const
{
	Fixed tmp;
	tmp.setRawBits(this->getRawBits() + f1.getRawBits());
	return (tmp);
}

Fixed Fixed::operator-(Fixed const & f1) const
{
	Fixed tmp;
	tmp.setRawBits(this->getRawBits() - f1.getRawBits());
	return (tmp);
}

Fixed Fixed::operator*(Fixed const & f1) const
{
	Fixed tmp(this->toFloat() * f1.toFloat());
	return (tmp);
}

Fixed Fixed::operator/(Fixed const & f1) const
{
	Fixed tmp(this->toFloat() / f1.toFloat());
	return (tmp);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	this->operator++();
	return (tmp);
}

Fixed & Fixed::operator++(void)
{
	this->_nb++;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	this->operator--();
	return (tmp);
}

Fixed & Fixed::operator--(void)
{
	this->_nb--;
	return (*this);
}


std::ostream &operator<<(std::ostream &out, Fixed const & ori)
{
	out << ori.toFloat();
	return (out);
} 

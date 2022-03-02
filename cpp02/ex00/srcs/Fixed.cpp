/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 13:20:09 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/02 20:51:11 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

Fixed::Fixed(void)
{
	this->_nb = 0;
	std::cout << VERT << "Default constructor called" << BLANC << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << VERT << "Destructor called" << BLANC<< std::endl;
	
}

Fixed::Fixed(int	new_nb)
{
	this->_nb = new_nb;
}

Fixed::Fixed(Fixed const & ori)
{
	std::cout << VERT << "Copy constructor called" << BLANC << std::endl;
	*this = ori;
}

int	Fixed::getRawBits(void) const
{
	std::cout << VERT << "getRawBits member function called" << BLANC << std::endl;
	return (this->_nb);
}

void	Fixed::setRawBits(int const raw)
{
	this->_nb = raw;
}

Fixed & Fixed::operator=(Fixed const & ori)
{
	std::cout << VERT << "Copy assignment operator called" << BLANC << std::endl;
	if (this != &ori)
		this->_nb = ori.getRawBits();
	return (*this);
}


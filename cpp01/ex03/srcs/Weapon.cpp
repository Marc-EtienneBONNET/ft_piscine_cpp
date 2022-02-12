/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 18:18:49 by mbonnet           #+#    #+#             */
/*   Updated: 2022/02/11 19:19:42 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/HumanA.hpp"
# include "../includes/HumanB.hpp"
# include "../includes/Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
	
}

Weapon::~Weapon(void) 
{
	
}

std::string const & Weapon::getType(void)
{
	std::string const & tmp = this->_type;
	return (tmp);
}

void	Weapon::setType(std::string str)
{
	this->_type = str;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 18:16:59 by mbonnet           #+#    #+#             */
/*   Updated: 2022/02/11 19:33:01 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/HumanA.hpp"
# include "../includes/HumanB.hpp"
# include "../includes/Weapon.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	std::cout << name << " est pret au combat !" << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << this->_name << " est mort !" << std::endl;
}

void	HumanB::attack(void)
{
	std::cout << this->_name << " attacks with their " << this->_hache->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &arme) 
{
	this->_hache = &arme;
}
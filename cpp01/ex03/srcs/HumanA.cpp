/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 17:56:41 by mbonnet           #+#    #+#             */
/*   Updated: 2022/02/11 19:00:22 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/Weapon.hpp"
# include "../includes/HumanA.hpp" 
# include "../includes/HumanB.hpp"

HumanA::HumanA(std::string name, Weapon &arme) : _name(name), _hache(arme)
{
	std::cout << name << " est pret au combat !" << std::endl; 
}

HumanA::~HumanA(void)
{
	std::cout << this->_name << " est mort !" << std::endl;
}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with their " << this->_hache.getType() << std::endl;
}
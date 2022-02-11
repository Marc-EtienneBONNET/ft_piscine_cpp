/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 15:31:39 by mbonnet           #+#    #+#             */
/*   Updated: 2022/02/11 16:29:00 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << ROUGE << "Un nouveau zombie vien d apparetre ..." << BLANC << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << VERT << "Le zombie " << this->_name << " vient de ce prendre un feche de Daryl Dixon !" << BLANC << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}
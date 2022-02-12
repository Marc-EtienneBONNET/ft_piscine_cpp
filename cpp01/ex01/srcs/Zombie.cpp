/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 15:31:39 by mbonnet           #+#    #+#             */
/*   Updated: 2022/02/11 17:28:08 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int	Zombie::_nb_zombie = 0;

Zombie::Zombie(void)
{
	Zombie::_nb_zombie++;
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

void	Zombie::rename(std::string name)
{
	this->_name = name;
}

int		Zombie::nb_zombie(void)
{
	return (Zombie::_nb_zombie);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 19:34:39 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/07 09:06:13 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/my_define_include.hpp" 
#include "../includes/Character.hpp"


Character::Character(void)
{
	this->_materia[0] = NULL;
	std::cout << VIOLET << "Construction Character" << BLANC << std::endl;
}

Character::~Character(void)
{
	std::cout << VIOLET << "Destruction Character" << BLANC << std::endl;
}

std::string	const &Character::getName(void) const
{
	return (this->_name);
}

void Character::equip(AMateria* m)
{
	int x;

	x = 0;
	for (x = 0; x != 4 && this->_materia[x] != NULL; x++);
	if (x != 4)
		this->_materia[x] = m;
	else
		std::cout << VIOLET << "desoler mais " << this->getName() << " est plain" << BLANC << std::endl;
}

void Character::unequip(int idx)
{
	if (idx < 4)
		this->_materia[idx] = NULL;
	else
		std::cout << VIOLET << "desoler mais l'index " << idx << " n est pas correcte" << BLANC << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 4)
		this->_materia[idx]->use(target);
	else
		std::cout << VIOLET << "desoler mais l'index " << idx << " n est pas correcte" << BLANC << std::endl;
}



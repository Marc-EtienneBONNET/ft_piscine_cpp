/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 19:34:39 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/07 13:35:16 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/my_define_include.hpp" 
#include "../includes/Character.hpp"


Character::Character(void)
{
	this->_materia[0] = NULL;
	std::cout << VIOLET << "Construction Character" << BLANC << std::endl;
}

Character::Character(std::string name) : _name(name)
{
	this->_materia[0] = NULL;
	std::cout << VIOLET << "Construction Character" << BLANC << std::endl;
}

Character::Character(Character &ori)
{
	if (this != &ori)
	{
		this->_name = ori.getName();
		for (int i = 0; i < 4; i++)
		{
			this->_materia[i] = ori.getMateria(i)->clone();
			if (ori.getMateria(i) == NULL)
				break;
		}
		std::cout << VIOLET << "Construction Character" << BLANC << std::endl;
	}
}

Character::~Character(void)
{
	for (int i = 0; i < 4 && this->_materia[i] != NULL; i++)
	{
		delete this->_materia[i];
		this->_materia[i] = NULL;
	}
	std::cout << VIOLET << "Destruction Character" << BLANC << std::endl;
}

AMateria *Character::getMateria(int index) const
{
	return (this->_materia[index]);
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
	{
		this->_materia[x] = m;
		this->_materia[x + 1] = NULL;
	}
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


Character &Character::operator=(Character &ori)
{
		std::cout << VIOLET << "\t\tcopie par operator" << BLANC << std::endl;

	if (this != &ori)
	{
		
		int i;
		for (i = 0; i < 4 && this->_materia[i] != NULL; i++)
			delete this->_materia[i];
		i = 0;
		for (i = 0; i < 4; i++)
		{
			this->_materia[i] = ori.getMateria(i);
			if (ori.getMateria(i) == NULL)
				break;
		}
		
		this->_name = ori.getName();
		this->_materia[0] = ori.getMateria(0);
		this->_materia[1] = ori.getMateria(1);
		this->_materia[2] = ori.getMateria(2);
		this->_materia[3] = ori.getMateria(3);
		std::cout << VIOLET << "copie par operator" << BLANC << std::endl;
	}
	return (*this);
}


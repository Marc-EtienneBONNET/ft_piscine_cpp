/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 13:17:10 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/23 16:35:07 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/MateriaSource.hpp" 
#include "../includes/Ice.hpp"
#include "../includes/Cure.hpp"

MateriaSource::MateriaSource(void)
{
    this->_materia[0] = NULL;
    std::cout << JAUNE << "Construction MateriaSource" << BLANC << std::endl;
}

MateriaSource::MateriaSource(MateriaSource &ori)
{
    int i;
    if (this != &ori)
    {
        for (i = 0; ori.getMateria(i) != NULL; i++)
        {
            if (ori.getMateria(i)->getType() == "ice")
                this->_materia[i] = new Ice();
            if (ori.getMateria(i)->getType() == "cure")
                this->_materia[i] = new Cure();
        }
        this->_materia[i] = NULL;
    }
        
    this->_materia[0] = NULL;
    std::cout << JAUNE << "Construction MateriaSource" << BLANC << std::endl;
}

MateriaSource::~MateriaSource(void)
{
    for (int i = 0; i < 4 && this->_materia[i] != NULL; i++)
        delete this->_materia[i];
    std::cout << JAUNE << "Destruction MateriaSource" << BLANC << std::endl;
}

MateriaSource &MateriaSource::operator=(MateriaSource &ori)
{
    if (this != &ori)
        *this = ori;
    return (*this);
}


void MateriaSource::learnMateria(AMateria*ori)
{
    int i;
    for(i = 0; i < 4; i++)
    {
        if (this->_materia[i] == NULL)
        {
            this->_materia[i] = ori;
            this->_materia[i + 1] = NULL;
            break ;
        }
    }
    if (i == 4)
    {
        delete ori;
        std::cout << JAUNE << "stock en memoire plain" << BLANC << std::endl;
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    int i;

    for(i = 0; i < 4 ; i++)
        if (this->_materia[i]->getType() == type)
            return (this->_materia[i]->clone());
    return (0);
}

AMateria *MateriaSource::getMateria(int index) const
{
	return (this->_materia[index]);
}

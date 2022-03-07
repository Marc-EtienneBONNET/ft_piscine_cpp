/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 13:17:10 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/07 13:41:37 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/MateriaSource.hpp" 

MateriaSource::MateriaSource(void)
{
    std::cout << JAUNE << "Construction MateriaSource" << BLANC << std::endl;
}

MateriaSource::~MateriaSource(void)
{
    std::cout << JAUNE << "Destruction MateriaSource" << BLANC << std::endl;
}

void MateriaSource::learnMateria(AMateria*ori)
{
    int i;
    for(i = 0; i < 4; i++)
    {
        if (this->_materia[i] == NULL)
        {
            this->_materia[i] = ori->clone();
            this->_materia[i + 1] = NULL;
            break ;
        }
    }
    if (i == 4)
        std::cout << JAUNE << "stock en memoire plain" << BLANC << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    int i;

    for(i = 0; i < 4 ; i++)
        if (this->_materia[i]->getType() == type)
            return (this->_materia[i]->clone());
    return (0);
}

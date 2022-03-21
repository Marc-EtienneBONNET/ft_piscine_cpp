/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 18:22:54 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/21 17:09:39 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef IMATERIASOURCE_H
# define IMATERIASOURCE_H
# include "my_define_include.hpp"
# include "AMateria.hpp"
# include "IMateriaSource.hpp" 
 

class MateriaSource : public IMateriaSource
{
public:
    MateriaSource(void);
    MateriaSource(MateriaSource &ori);
    MateriaSource &operator=(MateriaSource &ori);
    virtual ~MateriaSource(void);
    virtual void learnMateria(AMateria*ori);
    virtual AMateria* createMateria(std::string const & type);
private : 
	AMateria	*_materia[5];
};
 
#endif


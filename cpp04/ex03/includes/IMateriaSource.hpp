/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 18:22:54 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/07 13:36:12 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef IMATERIAS_H 
# define IMATERIAS_H
# include "my_define_include.hpp"
# include "AMateria.hpp"
 

class IMateriaSource
{
public:
virtual ~IMateriaSource(void) {}
virtual void learnMateria(AMateria*) = 0;
virtual AMateria* createMateria(std::string const & type) = 0;
};
 
#endif


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 18:22:42 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/07 13:17:06 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H 

# include "my_define_include.hpp"
class ICharacter;
# include "ICharacter.hpp" 

class AMateria
{
protected:
    std::string _type;
public:
    AMateria(void);
    AMateria(std::string const & type);
    virtual ~AMateria(void);
    std::string const & getType() const; //Returns the materia type
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};

#endif
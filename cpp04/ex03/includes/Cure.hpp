/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 18:22:45 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/07 09:06:37 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef CURE_H
# define CURE_H
# include "my_define_include.hpp"
# include "ICharacter.hpp"
# include "AMateria.hpp"
 
class Cure : public AMateria
{
public :
	Cure(void);
	~Cure(void);
	Cure &operator=(Cure &ori);

	virtual AMateria *clone() const;
    virtual void use(ICharacter& target);
};

#endif
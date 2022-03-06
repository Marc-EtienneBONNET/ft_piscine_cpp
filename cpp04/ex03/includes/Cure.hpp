/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 18:22:45 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/06 20:03:00 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
# define CURE_H
# include "IMateriaSource.hpp"
# include "ICharacter.hpp"
# include "Character.hpp"
# include "Ice.hpp"

class Cure : public AMateria
{
public :
	Cure(void);
	~Cure(void);
	Cure &operator=(Cure &ori);

	virtual AMateria *clone() const;
    //virtual void use(ICharacter& target);
};
#endif
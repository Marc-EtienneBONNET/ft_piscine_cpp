/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 18:22:51 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/06 20:06:02 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_H
# define ICHARACTER_H
# include "IMateriaSource.hpp"
# include "ICharacter.hpp"
# include "Character.hpp"
# include "Cure.hpp"
# include "Ice.hpp"


class ICharacter 
{
public:
	virtual ~ICharacter() {}
	virtual std::string const & getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
};

#endif
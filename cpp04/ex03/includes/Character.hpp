/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 18:22:51 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/07 11:57:37 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CHARACTER_H 
# define CHARACTER_H
# include "my_define_include.hpp"
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter
{
public:
	Character(void);
	Character(std::string name);
	Character(Character &ori);
	virtual 			~Character(void);
	virtual std::string const & getName() const;
	virtual AMateria  	 *getMateria(int index) const;
	virtual void 		equip(AMateria* m);
	virtual void 		unequip(int idx);
	virtual void 		use(int idx, ICharacter& target);
	Character 			&operator=(Character &ori);
private : 
	std::string _name;
	AMateria	*_materia[5];
};

#endif
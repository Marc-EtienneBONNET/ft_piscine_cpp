/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 18:22:48 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/06 20:08:18 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H
# include "AMateria.hpp"

class Ice : public AMateria
{
public :
	Ice(void);
	~Ice(void);
	Ice &operator=(Ice &ori);

	virtual AMateria *clone() const;
    //virtual void use(ICharacter& target);
};

#endif
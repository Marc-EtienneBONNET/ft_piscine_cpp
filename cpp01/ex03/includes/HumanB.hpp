/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 17:45:32 by mbonnet           #+#    #+#             */
/*   Updated: 2022/02/11 19:34:09 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef H_HUMANB_H
# define H_HUMANB_H
#include "Weapon.hpp"
#include "HumanA.hpp"
class HumanB
{
public:
	HumanB(std::string name);
	~HumanB(void);
	void	attack(void);
	void	setWeapon(Weapon &arme);

private:
	Weapon		*_hache;
	std::string	_name;
};

#endif
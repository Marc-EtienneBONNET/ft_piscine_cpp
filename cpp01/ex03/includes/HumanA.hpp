/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 17:46:11 by mbonnet           #+#    #+#             */
/*   Updated: 2022/02/11 19:19:14 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #ifndef H_HUMANA_H
# define H_HUMANA_H
#include "Weapon.hpp"
#include "HumanB.hpp"


class HumanA
{
public:
	HumanA(std::string name, Weapon& arme);
	~HumanA(void);
	void	attack(void);

private:
	std::string	_name;
	Weapon		&_hache;
};

#endif
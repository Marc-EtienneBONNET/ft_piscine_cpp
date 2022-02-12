/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 17:44:51 by mbonnet           #+#    #+#             */
/*   Updated: 2022/02/11 19:17:34 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef H_WEAPON_H
# define H_WEAPON_H
# include <iostream>
# include <string>

class Weapon
{
public:
	Weapon(std::string type);
	~Weapon(void);
	std::string const & getType(void);
	void	setType(std::string str);

private:
	std::string _type;
};

#endif
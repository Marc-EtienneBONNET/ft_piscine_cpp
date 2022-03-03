/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 13:49:28 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/03 16:08:54 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public : 
    ScavTrap(void);
    ScavTrap(std::string name);
    ~ScavTrap(void);
    void       attack(const std::string& target);
    void    guardGate(void);
protected:
    static const int    _defaultPv;
    static const int    _defaultEn;
    static const int    _defaultDomage;   
private : 

};

#endif
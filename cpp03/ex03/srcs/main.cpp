/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 13:48:13 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/03 16:35:26 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/FragTrap.hpp"
#include "../includes/DiamondTrap.hpp"

int     main()
{
    DiamondTrap Minato("Minato Namikaze");
    Minato.myPrintInfo();
    std::cout << std::endl << "-----debut des combats----------------------------------------------------------------------------------" << std::endl;
    Minato.FragTrap::attack("Madarat Uchiha");
    Minato.takeDamage(10);
    Minato.beRepaired(13);
    std::cout << "-----fin des combats------------------------------------------------------------------------------------" << std::endl << std::endl;

}
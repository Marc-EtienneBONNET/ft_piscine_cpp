/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:09:38 by mbonnet           #+#    #+#             */
/*   Updated: 2022/02/11 19:35:23 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/Weapon.hpp"
# include "../includes/HumanA.hpp"
# include "../includes/HumanB.hpp"

# define BLEU "\e[1;36m"
# define BLEU_2 "\e[1;34m"
# define ROUGE "\e[1;31m"
# define VERT "\e[1;32m"
# define JAUNE "\e[1;33m"
# define VIOLET "\e[1;35m"
# define BLANC "\e[0m"


int	main(void)
{
    Weapon  club = Weapon("Grosse hache");
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("Belle epee");
   	bob.attack();
	/*
	Weapon  club_2 = Weapon("crude spiked club");
	HumanB jim("Jim");
	jim.setWeapon(club_2);
	jim.attack();
	club_2.setType("baguette magique"); 
	jim.attack();
	*/
}
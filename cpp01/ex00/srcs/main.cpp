/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:09:38 by mbonnet           #+#    #+#             */
/*   Updated: 2022/02/11 19:52:16 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int	main(void)
{
	Zombie *p_z_3;
	Zombie *p_z_4;

	randomChump("Zo1");
	randomChump("Zo2");

	p_z_3 = newZombie("Zo3");
	p_z_4 = newZombie("Zo4");
	p_z_3->announce();
	p_z_4->announce();
	delete p_z_3;
	delete p_z_4;
	return (0);
}
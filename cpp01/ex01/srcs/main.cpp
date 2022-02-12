/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:09:38 by mbonnet           #+#    #+#             */
/*   Updated: 2022/02/11 17:27:30 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int	main(void)
{
	Zombie* horde_z;
	int		x;
	int		nb_zombie;

	x = -1;
	horde_z = zombieHorde(10, "Membre de la Horde !");
	nb_zombie = horde_z->nb_zombie();
	while (++x < nb_zombie)
		horde_z[x].announce();
	delete [] horde_z;
	return (0);
}
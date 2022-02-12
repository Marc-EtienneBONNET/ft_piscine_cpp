/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 15:36:00 by mbonnet           #+#    #+#             */
/*   Updated: 2022/02/11 17:19:21 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	int	x;

	x = 0;
	Zombie* zo1 = new Zombie[N];
	while (x < N)
	{
		zo1[x].rename(name);
		x++;
	}
	return (zo1);
}
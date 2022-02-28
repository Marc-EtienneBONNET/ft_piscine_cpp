/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:09:38 by mbonnet           #+#    #+#             */
/*   Updated: 2022/02/28 15:49:56 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/mes_class.class.hpp"

int	main(int ac, char **av)
{
	int	x;
	int y;

	x = 1;
	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	
	while (av[x])
	{
		y = 0;
		while (av[x][y])
		{
			std::cout << static_cast<unsigned char>(std::toupper((av[x][y])));
			y++;
		}
		x++;
	}
	std::cout << std::endl;
	return (0);
}
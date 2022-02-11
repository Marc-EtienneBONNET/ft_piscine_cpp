/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:09:38 by mbonnet           #+#    #+#             */
/*   Updated: 2022/02/09 13:28:21 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/mes_class.class.hpp"

int	main(int ac, char **av)
{
	int	x;

	x = 1;
	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (av[x])
		std::cout << av[x++];
	std::cout << std::endl;
	return (0);
}
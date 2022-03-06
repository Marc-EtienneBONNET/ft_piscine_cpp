/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:09:38 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/06 17:50:48 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/my_define_include.hpp"

int	main(void)
{
	int x;
	int y;

	x = 2;
	y = 0;
	Animal *canope[x];
	while (y < x/2)
		canope[y++] = new Cat();
	while (y < x)
		canope[y++] = new Cat();

	y = 0;
	while (y < x)
		delete canope[y++];
	return (0);
}
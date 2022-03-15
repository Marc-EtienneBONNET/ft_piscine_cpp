/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:09:38 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/15 10:54:02 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/my_define_include.hpp"

int	main(int ac, char **av)
{
	(void)av;
	if (ac != 2)
	{
		std::cout << ROUGE << "argument incorrecte !(char, int, float, double)" << BLANC << std::endl;
		return (-1);
	}
	try
	{
		Para para(av[1]);
		para.myPrint();
	}
	catch (std::exception &e)
	{

		std::cout << ROUGE << e.what() << BLANC << std::endl;
	}
	return (0);
}
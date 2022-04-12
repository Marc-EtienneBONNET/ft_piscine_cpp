/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:09:38 by mbonnet           #+#    #+#             */
/*   Updated: 2022/04/12 14:35:26 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/easyfind.hpp"

int	main(int ac, char **av)
{
	(void)ac;
	(void)av;

	std::list<int> tab;
	std::string nb;
	tab.push_back(1);
	tab.push_back(2);
	tab.push_back(3);
	tab.push_back(4);
	tab.push_back(5);
	tab.push_back(6);
	tab.push_back(7);
	tab.push_back(8);
	tab.push_back(9);
	while (nb != "exit")
	{
		nb = "exit";
		std::cout << "(exit pour sortir) choisisez un nombre entre 1 et 9 compris : ";
		std::cin >> nb;
		std::cout << std::endl;
		if (nb == "exit")
			return (0);
		try
		{
			easyfind<std::list<int> >(tab, std::atoi(nb.c_str()));
		}
		catch (std::exception &e)
		{
			std::cout << ROUGE << e.what() << BLANC << std::endl;
		}
		
	}
	return (0);
}
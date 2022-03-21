/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:09:38 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/21 14:23:39 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

int	main(int ac, char **av)
{
	(void)ac;
	(void)av;
	std::string nb = "deb";
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << JAUNE << "The smallest gap : " << sp.shortestSpan() << BLANC << std::endl;
	std::cout << JAUNE << "The biggest gap  : " << sp.longestSpan() << BLANC << std::endl;
	try
	{
		nb = "deb";
		std::cout << VIOLET << "choisisez la taille de votre tableau : " << BLANC;
		std::cin >> nb;
		Span test(std::atoi(nb.c_str()));
		while (nb != "exit")
		{
			nb = "deb";
			std::cout << VIOLET << "choisisez un nombre : " << BLANC;
			std::cin >> nb;
			if (nb == "exit")
				break ;
			test.addNumber(std::atoi(nb.c_str()));
		}
		std::cout << JAUNE << "The smallest gap : " << test.shortestSpan() << BLANC << std::endl;
		std::cout << JAUNE << "The biggest gap  : " << test.longestSpan() << BLANC << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << std::endl << ROUGE << e.what() << BLANC << std::endl;
	}
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:09:38 by mbonnet           #+#    #+#             */
/*   Updated: 2022/04/12 18:04:11 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

int	main(int ac, char **av)
{
	(void)ac;
	(void)av;
	try
	{
		std::string nb = "deb";
		Span sp = Span(6);
		std::vector<unsigned int> v;
		v.push_back(10);
		v.push_back(12);
		v.push_back(16);
		v.push_back(200);
		sp.addNumber(100);
		sp.addNumber(5);
		sp.addNumber(v.begin(), v.end());
		std::cout << JAUNE << "The smallest gap : " << sp.shortestSpan() << BLANC << std::endl;
		std::cout << JAUNE << "The biggest gap  : " << sp.longestSpan() << BLANC << std::endl;
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
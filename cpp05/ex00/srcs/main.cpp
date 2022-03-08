/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:09:38 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/08 10:08:57 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

int	main(int ac, char **av)
{
	(void)ac;
	(void)av;
	Bureaucrate *macron;
	try
	{
		macron = new Bureaucrate("M. Macron", -1);
	}
	catch (std::exception &e)
	{
    	std::cout << ROUGE << e.what() << BLANC << std::endl;
		return (0);
	}

	std::cout << "Name : " << macron->getName() << std::endl;
	std::cout << "Lvl  : " << macron->getGrade() << std::endl;
	delete macron;
	return (0);
}
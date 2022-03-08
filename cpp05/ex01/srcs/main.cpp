/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:09:38 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/08 11:28:51 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

int	main(int ac, char **av)
{
	(void)ac;
	(void)av;
	std::cout << VERT << "---teste d init de Oroshimaru lvl 151 (res normale : Invalide)---" << BLANC << std::endl;
	try
	{
		Bureaucrat Oroshimaru("Oroshimaru", 151);
		std::cout << Oroshimaru << std::endl;
		std::cout << VERT << "---incrementation---" << BLANC << std::endl;
		Oroshimaru.incrementGrade(1);
		std::cout << Oroshimaru << std::endl;
		std::cout << VERT << "---decrementation---" << BLANC << std::endl;
		Oroshimaru.decrementGrade(1);
		std::cout << Oroshimaru << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << ROUGE << e.what() << BLANC << std::endl;
	}
	std::cout << VERT << "-------------------fin du test Oroshimaru--------------------" << BLANC << std::endl << std::endl;
		std::cout << VERT << "---teste d init de Konoamaru lvl -1 (res normale : Invalide)---" << BLANC << std::endl;
	try
	{
		Bureaucrat Konoamaru("Konoamaru", -1);
		std::cout << Konoamaru << std::endl;
		std::cout << VERT << "---incrementation---" << BLANC << std::endl;
		Konoamaru.incrementGrade(1);
		std::cout << Konoamaru << std::endl;
		std::cout << VERT << "---decrementation---" << BLANC << std::endl;
		Konoamaru.decrementGrade(1);
		std::cout << Konoamaru << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << ROUGE << e.what() << BLANC << std::endl;
	}
	std::cout << VERT << "-------------------fin du test Konoamaru--------------------" << BLANC << std::endl << std::endl;
	std::cout << VERT << "---teste d init de Tsunade lvl 150 (res normale : Valide)---" << BLANC << std::endl;
	try
	{
		Bureaucrat Tsunade("Tsunade", 150);
		std::cout << Tsunade << std::endl;
		std::cout << VERT << "---incrementation---" << BLANC << std::endl;
		Tsunade.incrementGrade(1);
		std::cout << Tsunade << std::endl;
		std::cout << VERT << "---decrementation---" << BLANC << std::endl;
		Tsunade.decrementGrade(1);
		std::cout << Tsunade << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << ROUGE << e.what() << BLANC << std::endl;
	}
	std::cout << VERT << "-------------------fin du test Tsunade--------------------" << BLANC << std::endl << std::endl;
	std::cout << VERT << "---teste d init de Kakashi lvl 1 (res normale : Valide)---" << BLANC << std::endl;
	try
	{
		Bureaucrat Kakashi("Kakashi", 1);
		std::cout << Kakashi << std::endl;
		std::cout << VERT << "---incrementation---" << BLANC << std::endl;
		Kakashi.incrementGrade(1);
		std::cout << Kakashi << std::endl;
		std::cout << VERT << "---decrementation---" << BLANC << std::endl;
		Kakashi.decrementGrade(1);
		std::cout << Kakashi << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << ROUGE << e.what() << BLANC << std::endl;
	}
	std::cout << VERT << "-------------------fin du test Kakashi--------------------" << BLANC << std::endl << std::endl;
		std::cout << VERT << "---teste d init de Kiba lvl 100 (res normale : Valide)---" << BLANC << std::endl;
	try
	{
		Bureaucrat Kiba("Kiba", 100);
		std::cout << Kiba << std::endl;
		std::cout << VERT << "---incrementation---" << BLANC << std::endl;
		Kiba.incrementGrade(1);
		std::cout << Kiba << std::endl;
		std::cout << VERT << "---decrementation---" << BLANC << std::endl;
		Kiba.decrementGrade(1);
		std::cout << Kiba << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << ROUGE << e.what() << BLANC << std::endl;
	}
	std::cout << VERT << "-------------------fin du test Kiba--------------------" << BLANC << std::endl << std::endl;
	return (0);
}
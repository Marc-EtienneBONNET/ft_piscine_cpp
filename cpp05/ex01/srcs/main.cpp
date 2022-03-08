/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:09:38 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/08 17:26:49 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
# include "../includes/Form.hpp"


int	main(int ac, char **av)
{
	(void)ac;
	(void)av;
	std::cout << VIOLET << "-------------------Test 1-------------------" << BLANC << std::endl;
	std::cout << "test : " << VERT << "Valide" << BLANC << std::endl;
	try
	{
		Form test("examin chunin", false, 40, 40);
		std::cout << VERT << "----------Debrif de formulaire----------" << std::endl << test << std::endl << "-------------------fin------------------" << BLANC << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << ROUGE << e.what() << BLANC << std::endl;
	}
	std::cout << VIOLET << "---------------------Fin---------------------" << BLANC << std::endl << std::endl;

	std::cout << VIOLET << "-------------------Test 2-------------------" << BLANC << std::endl;
	std::cout << "test : " << ROUGE << "Invalide " << BLANC << "(grade de signature invalide)" << std::endl;
	try
	{
		Form test("examin chunin", false, 151, 40);
		std::cout << VERT << "----------Debrif de formulaire----------" << std::endl << test << std::endl << "-------------------fin------------------" << BLANC << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << ROUGE << e.what() << BLANC << std::endl;
	}
	std::cout << VIOLET << "---------------------Fin---------------------" << BLANC << std::endl << std::endl;
	std::cout << VIOLET << "-------------------Test 3-------------------" << BLANC << std::endl;
	std::cout << "test : " << ROUGE << "Invalide " << BLANC << "(grade d ex invalide)" << std::endl;
	try
	{
		Form test("examin chunin", false, 40, 151);
		std::cout << VERT << "----------Debrif de formulaire----------" << std::endl << test << std::endl << "-------------------fin------------------" << BLANC << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << ROUGE << e.what() << BLANC << std::endl;
	}
	std::cout << VIOLET << "---------------------Fin---------------------" << BLANC << std::endl << std::endl;

	std::cout << VIOLET << "-------------------Test 4-------------------" << BLANC << std::endl;
	std::cout << "test : " << VERT << "Valide " << BLANC << std::endl;
	try
	{
		Form test("examin chunin", false, 40, 40);
		std::cout << VERT << "----------Debrif de formulaire----------" << std::endl << test << std::endl << "-------------------fin------------------" << BLANC << std::endl;
		try
		{
			Bureaucrat Tsunade("Tsunade", 150);
			std::cout << VERT << "----------Debrif de Bureaucrate---------"<< std::endl <<"Bureaucrat \t: " << Tsunade.getName() << std::endl << "Grade \t\t: " << Tsunade.getGrade() << std::endl << "-------------------fin------------------" << BLANC << std::endl;
			try
			{
				test.beSigned(Tsunade);
				std::cout << VERT << "----------Debrif de formulaire----------" << std::endl << test << std::endl << "-------------------fin------------------" << BLANC << std::endl;
			}
			catch (std::exception &e)
			{
				std::cout << ROUGE << e.what() << BLANC << std::endl;
			}
		}
		catch (std::exception &e)
		{
			std::cout << ROUGE << e.what() << BLANC << std::endl;
		}
	}
	catch (std::exception &e)
	{
		std::cout << ROUGE << e.what() << BLANC << std::endl;
	}
	std::cout << VIOLET << "---------------------Fin---------------------" << BLANC << std::endl << std::endl;
	std::cout << VIOLET << "-------------------Test 5-------------------" << BLANC << std::endl;
	std::cout << "test : " << ROUGE << "Invalide " << BLANC << "(Grade du bureaucrate insufisant)" << std::endl;
	try
	{
		Form test("examin chunin", false, 110, 40);
		std::cout << VERT << "----------Debrif de formulaire----------" << std::endl << test << std::endl << "-------------------fin------------------" << BLANC << std::endl;
		try
		{
			Bureaucrat Naruto("Naruto", 100);
			std::cout << VERT << "----------Debrif de Bureaucrate---------"<< std::endl <<"Bureaucrat \t: " << Naruto.getName() << std::endl << "Grade \t\t: " << Naruto.getGrade() << std::endl << "-------------------fin------------------" << BLANC << std::endl;
			try
			{
				test.beSigned(Naruto);
				std::cout << VERT << "----------Debrif de formulaire----------" << std::endl << test << std::endl << "-------------------fin------------------" << BLANC << std::endl;
			}
			catch (std::exception &e)
			{
				std::cout << ROUGE << e.what() << BLANC << std::endl;
			}
		}
		catch (std::exception &e)
		{
			std::cout << ROUGE << e.what() << BLANC << std::endl;
		}
	}
	catch (std::exception &e)
	{
		std::cout << ROUGE << e.what() << BLANC << std::endl;
	}
	std::cout << VIOLET << "---------------------Fin---------------------" << BLANC << std::endl << std::endl;
	std::cout << VIOLET << "-------------------Test 6-------------------" << BLANC << "(utilisation de signForm())" << std::endl;
	std::cout << "test : " << VERT << "Valide " << BLANC << std::endl;
	try
	{
		Form test("examin chunin", false, 100, 40);
		std::cout << VERT << "----------Debrif de formulaire----------" << std::endl << test << std::endl << "-------------------fin------------------" << BLANC << std::endl;
		try
		{
			Bureaucrat Naruto("Naruto", 100);
			std::cout << VERT << "----------Debrif de Bureaucrate---------"<< std::endl <<"Bureaucrat \t: " << Naruto.getName() << std::endl << "Grade \t\t: " << Naruto.getGrade() << std::endl << "-------------------fin------------------" << BLANC << std::endl;
			try
			{
				Naruto.signForm(test);
				std::cout << VERT << "----------Debrif de formulaire----------" << std::endl << test << std::endl << "-------------------fin------------------" << BLANC << std::endl;
			}
			catch (std::exception &e)
			{
				std::cout << ROUGE << e.what() << BLANC << std::endl;
			}
		}
		catch (std::exception &e)
		{
			std::cout << ROUGE << e.what() << BLANC << std::endl;
		}
	}
	catch (std::exception &e)
	{
		std::cout << ROUGE << e.what() << BLANC << std::endl;
	}
	std::cout << VIOLET << "---------------------Fin---------------------" << BLANC << std::endl << std::endl;
	std::cout << VIOLET << "-------------------Test 7-------------------" << BLANC << std::endl;
	std::cout << "test : " << ROUGE << "Invalide " << BLANC << "(utilisation de signForm() mais grade insufisant)" << std::endl;
	try
	{
		Form test("examin chunin", false, 110, 40);
		std::cout << VERT << "----------Debrif de formulaire----------" << std::endl << test << std::endl << "-------------------fin------------------" << BLANC << std::endl;
		try
		{
			Bureaucrat Naruto("Naruto", 100);
			std::cout << VERT << "----------Debrif de Bureaucrate---------"<< std::endl <<"Bureaucrat \t: " << Naruto.getName() << std::endl << "Grade \t\t: " << Naruto.getGrade() << std::endl << "-------------------fin------------------" << BLANC << std::endl;
			try
			{
				Naruto.signForm(test);
				std::cout << VERT << "----------Debrif de formulaire----------" << std::endl << test << std::endl << "-------------------fin------------------" << BLANC << std::endl;
			}
			catch (std::exception &e)
			{
				std::cout << ROUGE << e.what() << BLANC << std::endl;
			}
		}
		catch (std::exception &e)
		{
			std::cout << ROUGE << e.what() << BLANC << std::endl;
		}
	}
	catch (std::exception &e)
	{
		std::cout << ROUGE << e.what() << BLANC << std::endl;
	}
	std::cout << VIOLET << "---------------------Fin---------------------" << BLANC << std::endl << std::endl;
std::cout << VIOLET << "-------------------Test 8-------------------" << BLANC << std::endl;
	std::cout << "test : " << VERT << "Invalide " << BLANC << "(utilisation de signForm() mais document deja signer)" << std::endl;
	try
	{
		Form test("examin chunin", true, 110, 40);
		std::cout << VERT << "----------Debrif de formulaire----------" << std::endl << test << std::endl << "-------------------fin------------------" << BLANC << std::endl;
		try
		{
			Bureaucrat Naruto("Naruto", 100);
			std::cout << VERT << "----------Debrif de Bureaucrate---------"<< std::endl <<"Bureaucrat \t: " << Naruto.getName() << std::endl << "Grade \t\t: " << Naruto.getGrade() << std::endl << "-------------------fin------------------" << BLANC << std::endl;
			try
			{
				Naruto.signForm(test);
				std::cout << VERT << "----------Debrif de formulaire----------" << std::endl << test << std::endl << "-------------------fin------------------" << BLANC << std::endl;
			}
			catch (std::exception &e)
			{
				std::cout << ROUGE << e.what() << BLANC << std::endl;
			}
		}
		catch (std::exception &e)
		{
			std::cout << ROUGE << e.what() << BLANC << std::endl;
		}
	}
	catch (std::exception &e)
	{
		std::cout << ROUGE << e.what() << BLANC << std::endl;
	}
	std::cout << VIOLET << "---------------------Fin---------------------" << BLANC << std::endl << std::endl;

}
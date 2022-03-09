/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:09:38 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/09 10:44:43 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp" 
#include "../includes/AForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
	
int	main(int ac, char **av) 
{
	(void)ac;
	(void)av;
	std::string name;
	int			grade;

	ShrubberyCreationForm b23("Benzay");
	RobotomyRequestForm b24("Robocop");
	PresidentialPardonForm b25("Sasuke");
	Bureaucrat tsunade("Tsunade",150);
	try
	{
		std::cout << BLEU << "Choisisez le nom de votre bureaucrate : " << BLANC << std::endl;
		std::cin >> name; 
		std::cout << BLEU << "Choisisez le grade de votre bureaucrate : " << BLANC << std::endl;
		std::cin >> grade; 
		Bureaucrat gratepapier(name, grade);
		std::cout << VIOLET << "---------------debut des verif de formulaire-------------------------" << BLANC << std::endl;
		b23.beSigned(gratepapier);
		b24.beSigned(gratepapier);
		b25.beSigned(gratepapier);
		b23.execute(gratepapier);
		b24.execute(gratepapier);
		b25.execute(gratepapier);

	}
	catch (std::exception &e)
	{
		std::cout << ROUGE << e.what() << BLANC << std::endl;
	}
	std::cout << VIOLET << "-----------------------------fin--------------------------------------" << BLANC << std::endl;

}
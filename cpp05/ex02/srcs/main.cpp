/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:09:38 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/09 11:32:13 by mbonnet          ###   ########.fr       */
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
	try
	{
		std::cout << BLEU << "Choisisez le nom de votre bureaucrate : " << BLANC << std::endl;
		std::cin >> name; 
		std::cout << BLEU << "Choisisez le grade de votre bureaucrate : " << BLANC << std::endl;
		std::cin >> grade; 
		Bureaucrat gratepapier(name, grade);
		std::cout << VIOLET << "---------------debut des verif de formulaire-------------------------" << BLANC << std::endl;
		std::cout << JAUNE << "PresidentialPardonForm grade sign  : " << b25.getGrade_sign() << BLANC << std::endl; 
		b25.beSigned(gratepapier);
		std::cout << JAUNE << "RobotomyRequestForm grade sign     : " << b24.getGrade_sign() << BLANC << std::endl; 
		b24.beSigned(gratepapier);
		std::cout << JAUNE << "ShrubberyCreationForm grade sign   : " << b23.getGrade_sign() << BLANC << std::endl; 
		b23.beSigned(gratepapier);
		std::cout << std::endl;
		std::cout << JAUNE << "PresidentialPardonForm grade ex    : " << b25.getGrade_ex() << BLANC << std::endl; 
		b25.execute(gratepapier);
		std::cout << JAUNE << "RobotomyRequestForm grade ex       : " << b24.getGrade_ex() << BLANC << std::endl; 
		b24.execute(gratepapier);
		std::cout << JAUNE << "ShrubberyCreationForm grade ex     : " << b23.getGrade_ex() << BLANC << std::endl; 
		b23.execute(gratepapier);
		std::cout << VIOLET << "-----------------------------fin--------------------------------------" << BLANC << std::endl;

	}
	catch (std::exception &e)
	{
		std::cout << ROUGE << e.what() << BLANC << std::endl;
		std::cout << VIOLET << "-----------------------------fin--------------------------------------" << BLANC << std::endl;
	}

}
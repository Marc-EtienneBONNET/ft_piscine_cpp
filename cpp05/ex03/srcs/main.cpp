/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:09:38 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/09 18:19:38 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp" 
#include "../includes/AForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp" 
#include "../includes/Intern.hpp"
	
int	main(int ac, char **av) 
{
	(void)ac;
	(void)av;
	if (ac != 3)
	{
		std::cout << BLEU << "Choisisez le nom du formulaire (\"presidential pardon\",\"robotomy request\", \"shrubbery creation\") et celui de la cible : " << BLANC << std::endl;
		return (-1);
	}
	Intern Charle;
	AForm *form = Charle.makeForm(av[1], av[2]);
	if (form == NULL)
	{
		std::cout << BLEU << "Nom du formulaire incorecte (\"presidential pardon\",\"robotomy request\", \"shrubbery creation\")" << BLANC << std::endl;
		return (-1);
	}
	std::cout << VERT << "Formulaire : " << BLANC << std::endl;
	std::cout << VERT << "Name		: " << form->getName() << BLANC << std::endl;
	std::cout << VERT << "etat		: " << form->getSign() << BLANC << std::endl;
	std::cout << VERT << "Grade s.	: " << form->getGrade_sign() << BLANC << std::endl;
	std::cout << VERT << "Grade e.	: " << form->getGrade_ex() << BLANC << std::endl;
	delete form;
}
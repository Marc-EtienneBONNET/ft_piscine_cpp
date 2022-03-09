/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:53:01 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/09 18:02:20 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Intern.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp" 

Intern::Intern(void)
{
	std::cout << "Stagiere embocher !" << std::endl;
}

Intern::~Intern(void)
{
	std::cout << "Stagiere renvoyer !" << std::endl;
}

Intern	&Intern::operator=(Intern &ori)
{
	if (this != &ori)
		*this = ori;
	return (*this);
}

AForm *new_pres(std::string cible)
{
	return (new PresidentialPardonForm(cible));
}

AForm *new_robo(std::string cible)
{
	return (new RobotomyRequestForm(cible));
}

AForm *new_shru(std::string cible)
{
	return (new ShrubberyCreationForm(cible));
}

typedef struct s_tab
{
	std::string name;
	AForm *(*P)(std::string target);
}t_tab;

AForm	*Intern::makeForm(std::string form_name, std::string cible)
{
	t_tab tab[3];
	tab[0].name = "presidential pardon";
	tab[0].P = &new_pres;
	tab[1].name = "robotomy request";
	tab[1].P = &new_robo;
	tab[2].name = "shrubbery creation";
	tab[2].P = &new_shru;
	int x = 0;
	while (x < 3)
	{
		if (form_name == tab[x].name)
		{
			std::cout << "Intern creates " << tab[x].name << std::endl;
			return (tab[x].P(cible));
		}
		x++;
	}
	return (NULL);
}
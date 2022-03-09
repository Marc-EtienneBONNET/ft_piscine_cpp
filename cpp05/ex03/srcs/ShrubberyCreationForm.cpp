/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationAForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 17:43:33 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/08 17:43:34 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ShrubberyCreationForm.hpp"
# include <fstream>
# include <sstream> 


ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
: AForm("formulaire de création d’arbustes", false, 145, 137), _target(target)
{
	std::cout  <<"Le formulaire : " << this->getName() << " a etait creer"  << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout  << "Le formulaire : " << this->getName() << " a etait detruit"  << std::endl;
}

void    ShrubberyCreationForm::execute(Bureaucrat const &executor)
{
	std::ofstream		fd_write;
    if (executor.getGrade() < this->getGrade_ex())
        throw(AForm::GradeTooHighException());
    if (this->getSign() == false)
        throw(AForm::NoSignException());
    fd_write.open((this->_target+ "_shrubbery").c_str(), std::ifstream::out);
    if (!fd_write.is_open())
    {
        std::cout << ROUGE << "impossible de creer un fichier" << BLANC << std::endl;
        return ;
    }
    std::cout << VERT << executor.getName() << " a creer un arbre dans le fichier : " << this->_target << "_shrubbery" << BLANC << std::endl;
    fd_write << VERT << "      ,.," << std::endl;
	fd_write << VERT<< "      MMMM_    ,..," << std::endl;
	fd_write << VERT << "        \"_ \"__\"MMMMM          ,...,," << std::endl;
	fd_write << VERT << " ,..., __.\" --\"    ,.,     _-\"MMMMMMM" << std::endl;
	fd_write << VERT << "MMMMMM\"___ \"_._   MMM\"_.\"\" _ \"\"\"\"\"\"" << std::endl;
	fd_write << VERT << " \"\"\"\"\"    \"\" , \\_.   \"_. .\"" << std::endl;
	fd_write << VERT << "        ,., _\"__ \\__./ .\"" << std::endl;
	fd_write << VERT << "       MMMMM_\"  \"_    ./"  << BLANC << std::endl;
	fd_write << "        ''''      (    )"<< std::endl;
	fd_write << " ._______________.-'____\"---._." << std::endl;
	fd_write << "  \\                          /" << std::endl;
	fd_write << "   \\________________________/" << std::endl;
	fd_write << "   (_)                    (_)" << std::endl;
	fd_write.close();
}
